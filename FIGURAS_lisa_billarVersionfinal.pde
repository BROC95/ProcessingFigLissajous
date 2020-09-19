float x,y,t,B,A;
float  fase;
float w1,w2;
PGraphics pg;


void setup()
{
  size (800,800);
  
  background(0);
    A=50;
    B=A;
    t=0;
  
}
void draw()
{ 
  //Figuras de lissjouis, dependen de la relación w2/w1 y de la diferencia de fase//
  
  botones(600,50);  
  logica_botons(); 
  x=width/2+A*sin(w2*t);
  y=height/2+B*sin(w1*t+fase);
  
  t++;
  delay(200);                               
          //texto codigo// 
   
  textSize(18);
  textAlign(CENTER);
  fill(#03C4FC);
  text("FIGURAS DE LISSAJOUS",width/2,20);
  fill(#19FA17);
  text("X",300,505);
  text("Y",100,300);
 
          //figuras de lissajous aplicando el movimiento//
   fill(255);  
  ellipse(x,y,10,10);
  ellipse(100,y,5,5);
  ellipse(x,500,5,5);
   
 
}
   void botones(float x,float y)    //FUNCION BOTONES
{
  //bola 1
  ellipseMode(CENTER);
  fill(#FCF508);
  ellipse(x/10,y,40,40);
  fill(255);
  ellipse(x/10,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("1",x/10,y);
  
   //bola 2
  ellipseMode(CENTER);
  fill(#080DFC);
  ellipse(x/4,y,40,40);
  fill(255);
  ellipse(x/4,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("2",x/4,y);
   //bola 3
  ellipseMode(CENTER);
  fill(#FC0015);
  ellipse(x/2,y,40,40);
  fill(255);
  ellipse(x/2,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("3",x/2,y);
     //bola 4
  ellipseMode(CENTER);
  fill(#6302C6);
  ellipse(x/1.5,y,40,40);
  fill(255);
  ellipse(x/1.5,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("4",x/1.5,y);
      //bola 5
  ellipseMode(CENTER);
  fill(#FC7C03);
  ellipse(x,y,40,40);
  fill(255);
  ellipse(x,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("5",x,y);  
}

 void botones2(float x,float y)    //FUNCION BOTONES 2
{
  //rect 1
  rectMode(CENTER);
  fill(#FCF508);
  rect(x/10,y,40,40);
  fill(255);
  rect(x/10,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("1/1",x/10,y);
  
   //rect 2
  rectMode(CENTER);
  fill(#080DFC);
  rect(x/4,y,40,40);
  fill(255);
  rect(x/4,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("1/2",x/4,y);
   //rect 3
  rectMode(CENTER);
  fill(#FC0015);
  rect(x/2,y,40,40);
  fill(255);
  rect(x/2,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("2/3",x/2,y);
     //rect 4
  rectMode(CENTER);
  fill(#6302C6);
  rect(x/1.5,y,40,40);
  fill(255);
  rect(x/1.5,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("3/5",x/1.5,y);
      //rect 5
  rectMode(CENTER);
  fill(#FC7C03);
  rect(x,y,40,40);
  fill(255);
  rect(x,y,25,25);
  fill(0);
  textAlign(CENTER);
  text("5/6",x,y);  
}
  //CONDICIONES FUNCIONANMIENTO 
 void logica_botons()
 {
   if(keyPressed)
   {  
     if(key=='v'){ clear();}
     
     if(key=='a')
     { 
       //indicadores de selección
       fill(123,123,123,255);
       rectMode(CENTER);
       rect(60,50,45,45);  
       
       botones2(600,100);
       
       }
        if(key=='e')
         {
           fill(123,123,123,255);
           rectMode(CENTER);
           rect(60,100,45,45);
           w1=1;w2=1;fase=PI;
         }
         if(key=='d')
         {
           fill(123,123,123,255);
           rectMode(CENTER);
           rect(150,100,45,45);
           w1=1;w2=1;fase=PI/4;
         }
         if(key=='c')
         {
           fill(123,123,123,255);
           rectMode(CENTER);
           rect(300,100,45,45);
           w1=1;w2=1;fase=PI/2;
         }
         if(key=='r')
         {
           fill(123,123,123,255);
           rectMode(CENTER);
           rect(400,100,45,45);
           w1=1;w2=1;fase=3*PI/4;
         }
         if(key=='f')
         {
           fill(123,123,123,255);
           rectMode(CENTER);
           rect(600,100,45,45);
           w1=6;w2=5;fase=0;
         }
     }
   } 