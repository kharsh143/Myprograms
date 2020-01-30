var box = document.getElementsByClassName('box');
var boxId = 0;
var boxArr = box;
var attempts = window.sessionStorage.getItem('attempts') || 0;
var j = 0;


var compare = "Pheretima posthuma";
var target2;
var isItalic = 0, isBold = 0, isUl = 0;
//Getting all the divs
var div1 = document.getElementById('divFirst');
var div2 = document.getElementById('divSecond');
var div3 = document.getElementById('divFinal');
var divQue = document.getElementById('que');
var divStart = document.getElementById('start');
var divEnd = document.getElementById('end');
var divLast = document.getElementById('lastDiv');

//Pointers for the eartworm images.
var imgreadptr = document.getElementById('pointer3');
var imgpointptr = document.getElementById('pointer4');
var imgupptr = document.getElementById('pointer2');
var imgdwnptr = document.getElementById('pointer1');

//Pointers for all the tags
var kingdom = document.getElementById('tag1');
var help = document.getElementById('tag2');
var drgdrp = document.getElementById('tag3');
var classify = document.getElementById('tag4');
var salftrs = document.getElementById('tag5');
var dblclicksalftrs = document.getElementById('tag6');
var drgdrpalftrs = document.getElementById('tag7');
var zlname = document.getElementById('tag8');
var performance = document.getElementById('tag9');

//Help buttons
var help_btn1 = document.getElementById('help_btns');
var help_btn2 = document.getElementById('help_btns2');
var help_btn3 = document.getElementById('help_btns3');


//Initiializing the functionality for ignoring the post backs.
//maintaining the percistant counter.
var total1Attempts = window.sessionStorage.getItem('atmpt1') || 0,
    total2Attempts = window.sessionStorage.getItem('atmpt2') || 0,
    total3Attempts = window.sessionStorage.getItem('atmpt3') || 0;

//Global array to maintain the order and sequence.
var arr = ['animalia', 'annelida', 'oligochaeta', 'opisthopora', 'pheretima', 'posthuma'];
var taxo = ['kingdom', 'phylum', 'class', 'order', 'genus', 'species'];

//Logging the no of attempts taken by the student.
console.log(attempts);

//Getting all the divs
var div1 = document.getElementById('divFirst');
var div2 = document.getElementById('divSecond');
var div3 = document.getElementById('divFinal');
var divQue = document.getElementById('que');
var divStart = document.getElementById('start');
var divEnd = document.getElementById('end');
var divLast = document.getElementById('lastDiv');

//Pointers for the eartworm images.
var imgreadptr = document.getElementById('pointer3');
var imgpointptr = document.getElementById('pointer4');
var imgupptr = document.getElementById('pointer2');
var imgdwnptr = document.getElementById('pointer1');

//Pointers for all the tags
var kingdom = document.getElementById('tag1');
var help = document.getElementById('tag2');
var drgdrp = document.getElementById('tag3');
var classify = document.getElementById('tag4');
var salftrs = document.getElementById('tag5');
var dblclicksalftrs = document.getElementById('tag6');
var drgdrpalftrs = document.getElementById('tag7');
var zlname = document.getElementById('tag8');
var performance1 = document.getElementById('tag9');

//Div of show help (1)
var help_btn1 = document.getElementById('help_btns');
var help_btn2 = document.getElementById('help_btns2');
var help_btn3 = document.getElementById('help_btns3');

//To hide all the tags before showing any one of them. [tags="Tags above the earthworm"].
function hideAllTags() {
    kingdom.style.display = "none";
    help.style.display = "none";
    drgdrp.style.display = "none";
    classify.style.display = "none";
    salftrs.style.display = "none";
    dblclicksalftrs.style.display = "none";
    drgdrpalftrs.style.display = "none";
    zlname.style.display = "none";
    performance1.style.display = "none";
}

check();

function check() {
    var lcn = window.location.href.split('#')[1];
    if (lcn != undefined) {
        var cn = lcn.split(':')[1];

        if (cn == 1) {
            hideAllDivs();
            div1.style.display = "";
            hideAllTags();
            drgdrp.style.display = "";
            hideAllGifs();
            imgpointptr.style.display = "";
            var atm1=parseInt(window.sessionStorage.getItem('atmpt1'))||0;
            document.getElementById('spnChance2').innerHTML=atm1;
        } else {
            if (cn == 2) {
                hideAllDivs();
                div2.style.display = "";
                hideAllGifs();
                imgpointptr.style.display = "";
                hideAllTags();
                classify.style.display = "";
                var atm2=parseInt(window.sessionStorage.getItem('atmpt2'))||0;
                document.getElementById('spnChance1').innerHTML=atm2;
            }
        }
    }
}

function reset() {
    setAttempts();
    window.location.href = window.location.href;
}

//Initializing the requisits using function
_init();

//requisits initialization function
function _init() {
    //Getting multiple containers
    var containers = document.getElementsByClassName('holder');

    //looping through all box items and applying the drag event
    for (var b of box) {
        b.addEventListener('drag', _boxdrag);
    }

    //looping through all container items and applying the drag and drop events
    for (var container of containers) {
        container.addEventListener("dragover", _dragover);
        container.addEventListener("dragenter", _dragenter);
        container.addEventListener("drop", _drop);
        //I Have setted the doctype to '' (null) to make drag and drop available in mozilla.
        container.addEventListener("dragstart", _dragstart);
    }
}

//drag enter for box to get the data id of box.
function _boxdrag(e) {
    boxId = e.target.getAttribute('data-id');
}

//drag start for box
function _dragstart(e) {
    e.dataTransfer.setData('text/plain', '');
}

//drag over for box
function _dragover(e) {
    e.preventDefault();
}

//drag enter for box
function _dragenter(e) {
    e.preventDefault();
}

function _drop(e) {
    //Req for the prevention of default events.
    e.preventDefault();

    for (var i = 0; i < boxArr.length; i++) {
        if (boxArr[i].getAttribute('data-id') == boxId) {
            boxArr[i].style.top = "0%";
            boxArr[i].style.left = "0%";
            this.children[0].children[0].children[j].children[0].append(boxArr[i]);
            j++;
        }
    }
}

//To hide all the divs.
function hideAllDivs() {
    div1.style.display = "none";
    div2.style.display = "none";
    div3.style.display = "none";
    divQue.style.display = "none";
    divStart.style.display = "none";
    divEnd.style.display = "none";
    divLast.style.display = "none";
}

//Used to set the total attempts to session storage of window.
//Will automatically gets destroyed after window is closed.
//In this scenario better than localstorage. :) :) :)
function setAttempts() {
    attempts = parseInt(total1Attempts) + parseInt(total2Attempts) + parseInt(total3Attempts);
    window.sessionStorage.setItem('attempts', attempts);
}

function hideAllGifs() {
    //Pointers for the eartworm images.
    imgreadptr.style.display = "none";
    imgpointptr.style.display = "none";
    imgupptr.style.display = "none";
    imgdwnptr.style.display = "none";
    imgdwnptr.style.display = "none";
}

function alertifyData(dt, i) {
    var txtx = document.getElementsByClassName('txt3');
    for (var a = 0; a < txtx.length; a++) {
        txtx[a].value = "";
    }

    document.getElementById('mdlImg').src = "images/salient_features/" + i + ".gif";
    document.getElementById('myBtn').click();
}

//Coding for the first Screen
function checkFirst(t) {
    var cntr = 0;
    var dzAns = document.getElementById("divDrpzAns").children[0].children;
    //console.log(dzAns.length);
    for (var i = 0; i < dzAns.length; i++) {
        var dzi = dzAns[i].children[0].children[0];
        if (dzi.getAttribute('data-order') == (i + 1)) {
            dzi.style.backgroundColor = "green";
            cntr++;
        } else {
            dzi.style.backgroundColor = "red";
        }
    }

    if (cntr == dzAns.length) {
        div1.style.display = "none";
        t.style.backgroundColor = "green";
        div2.style.display = "";
        window.sessionStorage.setItem('atmpt1', 0);
        hideAllTags();
        classify.style.display = "";
        hideAllGifs();
        imgpointptr.style.display = "";
        hideAllTags();
        classify.style.display = "";
        window.location.href = window.location.href.split('#')[0] + "#act:2";
        bindDivs();
        help.style.display = "none";
        help_btn2.style.display = "none";
    } else {
        hideAllGifs();
        imgdwnptr.style.display = "";
        total1Attempts++;
        var attmpt1=parseInt(window.sessionStorage.getItem('atmpt1'))||0;
        attmpt1++;
        document.getElementById('spnChance2').innerHTML=attmpt1;
        if(attmpt1==5){
          alert('Go prepare some theory and then come back to simulator');
          window.location.href=window.location.href.split('#')[0];
        }
        window.sessionStorage.setItem('atmpt1', attmpt1);
        setAttempts();
    }
    if (parseInt(window.sessionStorage.getItem('atmpt1')) > 2) {
        hideAllTags();
        help.style.display = "";
        help_btn1.style.display = "";
    }else{
      help.style.display = "none";
      help_btn1.style.display = "none";
    }

    if (parseInt(window.sessionStorage.getItem('atmpt1')) >= 4 && !(cntr == dzAns.length)) {
        alert("Go prepare some theory and come back to simulation");
        window.sessionStorage.setItem('atmpt1', 0);
        window.sessionStorage.setItem('atmpt2', 0);
        window.sessionStorage.setItem('atmpt3', 0);
        window.sessionStorage.setItem('atmpt4', 0);
        window.sessionStorage.setItem('attempts', 0);
        window.location.href = window.location.href.split('#')[0];
    }
}

function yes() {
    document.getElementById('divSalient').style.display = "";
    document.getElementById('nextBtn').style.display = "none";
    hideAllTags();
    drgdrpalftrs.style.display = "";
    document.getElementById('msg').style.display = "none";
    document.getElementById('yesno').style.display = "none";
}

function nxtStep(t) {
    hideAllTags();
    salftrs.style.display = "";
    t.style.display="none";
    document.getElementById('yesno').style.display = "";
    document.getElementById('divSalient').style.display="none";
}

function no() {
    document.getElementById('divSalient').style.display = "";
    document.getElementById('nextBtn').style.display = "";
    document.getElementById('yesno').style.display="none";
    hideAllTags();
    dblclicksalftrs.style.display = "";
    hideAllGifs();
    imgreadptr.style.display="";
}

//Coding for second screen
function checkSecond(t) {
    var dz = document.getElementById('divSecondDropz').children[0].children;
    var cntr = 0;

    //data-taxo
    //divOrder divSecondDropz
    for (var i = 0; i < dz.length; i++) {
        var dz1 = dz[i].children[0].children[0];
        var spdn = dz[i].children[0].children[1];
        var trdChild = dz[i].children[0].children[2];

        if (dz1.value.toLowerCase() == arr[i]) {
            dz1.style.borderColor = "green";
            spdn.innerHTML = "✔︎";
            spdn.style.color = "green";
            dz1.style.margin = "0px 0px 50px 0px";
            trdChild.innerHTML = "";
            cntr++;
        } else {
            spdn.innerHTML = "X"
            spdn.style.color = "red";
            dz1.style.borderColor = "red";

            if (dz1.value == "") {
                dz1.style.margin = "17px 0px";
                trdChild.style.color = "red";
                trdChild.innerHTML = "<br>Enter " + taxo[i] + ".";
            } else {
                dz1.style.margin = "17px 0px";
                trdChild.style.color = "red";
                trdChild.innerHTML = "<br>Enter Correct Spelling.";
            }
        }
    }
    var ifYes=0;
    if (cntr == dz.length) {
        bindDivs();
        clearSelectionSalient();

        hideAllGifs();
        imgreadptr.style.display = "";
        //help_btn2.style.display = "none";

        hideAllTags();
        help.style.display = "none";
        hideAllTags();
        salftrs.style.display = "";
        document.getElementById('btnYes1').style.display="none";
        document.getElementById('btnNo1').style.display="none";
        help_btn2.style.display = "none";
        hideAllTags();
        help.style.display="none";
        ifYes=1;
        salftrs.style.display="";
        hideAllDivs();
        div3.style.display = "";
        document.getElementById('yesno').style.display = "";

    } else {
        total2Attempts++;
        var attmpt2=parseInt(window.sessionStorage.getItem('atmpt2'))||0;
        attmpt2++;
        document.getElementById('spnChance1').innerHTML=attmpt2;
        if(attmpt2==5){
          alert('Go prepare some theory and then come back to simulator');
          window.location.href=window.location.href.split('#')[0];
        }
        window.sessionStorage.setItem('atmpt2', attmpt2);
        setAttempts();
        hideAllGifs();
        imgdwnptr.style.display = "";
    }
    //alert(parseInt(window.sessionStorage.getItem('atmpt2')));
    if (parseInt(window.sessionStorage.getItem('atmpt2')) == 3 && !(ifYes==1)) {

        hideAllTags();
        help.style.display = "";
        help_btn2.style.display = "";
    }else{
      help.style.display = "none";
      help_btn2.style.display = "none";
    }

    if (parseInt(window.sessionStorage.getItem('atmpt2')) >= 4 && !(cntr == dz.length)) {
        alert("Go and check help option.");
        //window.location.href = window.location.href.split('#')[0] || window.location.href;
    }
}

//To insert the selected simmulation in equivalent textbox.
function insertFeature(txt, slFor) {
    var txts = document.getElementsByClassName('txt3');
    for (var i = 0; i < txts.length; i++) {
        if (txts[i].value == '') {
            txts[i].value = txt;
            txts[i].setAttribute('data-for', slFor);
            break;
        }
    }
}

//To clear the values stored in textboxes due to cache in browser textboxes.
function clearSelectionSalient() {
    var txtx = document.getElementsByClassName('txt3');
    console.log(txtx);
    for (var i = 0; i < txtx.length; i++) {
        txtx[i].value = "";
    }
}

//Checking the conditions for #divFinal
function checkSalients() {
    var cntSl = 0;
    var txtx = document.getElementsByClassName('txt3');
    console.log(txtx);
    for (var i = 0; i < txtx.length; i++) {
        if (txtx[i].getAttribute('data-for') == arr[i]) {
            txtx[i].style.borderColor = "green";
            cntSl++;
        } else {
            txtx[i].style.borderColor = "red";
        }
    }

    if (cntSl == txtx.length) {
        hideAllDivs();
        divEnd.style.display = "";
        hideAllGifs();
        hideAllTags();
    } else {
        total3Attempts++;
        window.sessionStorage.setItem('attmpt3',total3Attempts);
        var attpmt3=window.sessionStorage.getItem('attmpt3')||0;
        attpmt3++;
        window.sessionStorage.setItem('attmpt3', attpmt3);
        setAttempts();
    }

    if (parseInt(window.sessionStorage.getItem('attmpt3')) == 3) {
        //code for 3 help.
        help_btn1.style.display = "none";
        help_btn2.style.display = "none";
        help_btn3.style.display = "";
        hideAllGifs();
        imgpointptr.style.display = "";
        hideAllTags();
        help.style.display = "";
        document.getElementById('yesno').style.display="none";
    }
}

//Merged for convinience

var compare = "Pheretima posthuma";
var target2;
var isItalic = 0, isBold = 0, isUl = 0;

function checkspell() {
    target2 = document.getElementById("TextArea").value;
    if (isBold == 0) {
        if (isUl == 0) {
            if (isItalic == 1) {
                if (!(target2 == compare)) {
                    alert("Please Enter The Correct Spelling");
                } else {
                    hideAllDivs();
                    divQue.style.display = "";

                    help_btn1.style.display = "none";
                    help_btn2.style.display = "none";
                    help_btn3.style.display = "none";
                }
            } else {
                alert("Make Italic");
            }
        } else {
            alert("Do Not Underline");
        }
    } else {
        alert("Do not Bold");
    }
}


//To clear salient feature text box value
function clearText(i) {
    document.getElementsByClassName("txt3")[i].value = "";
}

//To get the salient info (to interact with user to get the choice)
function getUserSalientInfo() {
    var r = confirm("Do You Know my salient features \n [ Yes : OK | No : Cancel ]");
    if (r == true) {
        document.getElementById('divSalient').style.display = "";
        document.getElementById('nextBtn').style.display = "";
    } else {
        document.getElementById('divSalient').style.display = "";
        document.getElementById('nextBtn').style.display = "";
    }
}

//To bind the array elements to div when page refreshes
function bindDivs() {
    var lbls = document.getElementsByClassName('lbl2');
    for (let i = 0; i < arr.length; i++) {
        lbls[i].style.backgroundColor = "";
        lbls[i].innerHTML = arr[i];
    }
}


////////*********************** MODAL CODE ******************////////////////////// */

// Get the modal
var modal = document.getElementById('myModal');

// Get the button that opens the modal
var btn = document.getElementById("myBtn");

// Get the <span> element that closes the modal
var span = document.getElementsByClassName("close")[0];

// When the user clicks the button, open the modal
btn.onclick = function () {
    modal.style.display = "block";
}

// When the user clicks on <span> (x), close the modal
span.onclick = function () {
    modal.style.display = "none";
}

// When the user clicks anywhere outside of the modal, close it
window.onclick = function (event) {
    if (event.target == modal) {
        modal.style.display = "none";
    }
}

//All Button Clicks
function startClick() {
    hideAllDivs();
    div1.style.display = "";
    hideAllGifs();
    imgpointptr.style.display = "";
    hideAllTags();
    drgdrp.style.display = "";
    window.location.href = window.location.href + "#act:1";
}


//Harsh code Que

var correct = 0;
var option1 = document.getElementsByClassName('option1');
var txt = "";
var i;
var scr;
window.sessionStorage.setItem('score', 0);

function check1Ans(t) {
    if (t.value == '11') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}
function check2Ans(t) {
    if (t.value == '22') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}
function check3Ans(t) {
    if (t.value == '32') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;

}
function check4Ans(t) {
    if (t.value == '41') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}
function check5Ans(t) {
    if (t.value == '52') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}

function check6Ans(t) {
    if (t.value == '61') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}

function check7Ans(t) {
    if (t.value == '74') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}

function check8Ans(t) {
    if (t.value == '83') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}

function check9Ans(t) {
    if (t.value == '93') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}

function check10Ans(t) {
    if (t.value == '104') {
        correct++;
    }
    window.sessionStorage.setItem('score', correct);
    scr = correct;
}

function endClick1() {
    // var rank = parseInt(window.sessionStorage.getItem('attempts')) / 100;
    // var score = 6 - parseInt(window.sessionStorage.getItem('attempts'));
    // alert(rank);
    // alert(score);
    var rank = parseInt(window.sessionStorage.getItem('score'));
    document.getElementById('spnScore').innerHTML=rank;
    var per=0;

    if(!(attempts==0)){
      per=(parseInt(attempts)/9)*100;
    }else{
      per=100;
    }

    var balPoint=100-per;
    console.log("Per : ",per);

    document.getElementById('c1').style.width=(100-Math.floor(balPoint))+"%";
    document.getElementById('c1').innerHTML="<h3 style='margin-left:20px;'>"+(100-Math.floor(balPoint))+"%</h3>";
    //var per=(parseInt(window.sessionStorage.getItem('attempts'))/180)*100;

    hideAllDivs();
    divLast.style.display = "";
}

function exitClick() {
    hideAllDivs();
    window.location.href = window.location.href.split('#')[0];
    divStart.style.display = "";
}

function displayOptn3(){
  document.getElementById('mdlImg').src="images/helpSalientFeatures.gif";
  document.getElementById('myBtn').click();
}

function noSalftrHlp(){
  hideAllGifs();
  imgreadptr.style.display="";
  hideAllTags();
  salftrs.style.display="";
  document.getElementById('yesno').style.display="";
  help_btns3.style.display="none";
}



//
function boldText() {
    var target = document.getElementById("TextArea");
    if (target.style.fontWeight == "bold") {
        target.style.fontWeight = "normal";
        isBold = 0;
    } else {
        target.style.fontWeight = "bold";
        isBold = 1;
    }
}

function italicText() {
    var target = document.getElementById("TextArea");
    if (target.style.fontStyle == "italic") {
        target.style.fontStyle = "normal";
        isItalic = 0;
    } else {
        target.style.fontStyle = "italic";
        isItalic = 1;
    }
}

function underlineText() {
    var target = document.getElementById("TextArea");
    if (target.style.textDecoration == "underline") {
        target.style.textDecoration = "none";
        isUl = 0;
    } else {
        target.style.textDecoration = "underline";
        isUl = 1;
    }
}

//To hide all the divs.
function hideAllDivs() {
    div1.style.display = "none";
    div2.style.display = "none";
    div3.style.display = "none";
    divQue.style.display = "none";
    divStart.style.display = "none";
    divEnd.style.display = "none";
    divLast.style.display = "none";
}

function hideAllTags() {
    kingdom.style.display = "none";
    help.style.display = "none";
    drgdrp.style.display = "none";
    classify.style.display = "none";
    salftrs.style.display = "none";
    dblclicksalftrs.style.display = "none";
    drgdrpalftrs.style.display = "none";
    zlname.style.display = "none";
    performance.style.display = "none";
}

function hideAllGifs() {
    //Pointers for the eartworm images.
    imgreadptr.style.display = "none";
    imgpointptr.style.display = "none";
    imgupptr.style.display = "none";
    imgdwnptr.style.display = "none";
    imgdwnptr.style.display = "none";
}
