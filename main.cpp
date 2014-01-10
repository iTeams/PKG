double r,b,x,y,n,i;

cin >> n;
n=-32;
        CRect v;
        GetClientRect (&v);
        r=v.right;
        b=v.bottom;
        CPen pen_w;
        CPen pen_b;
pen_w. CreatePen(PS_SOLID, 1, RGB(255,255,255)); 
pen_b. CreatePen(PS_SOLID, 1, RGB(0,0,0)); 
dc.SelectObject(&pen_b);

        //поверхня під столиком
        dc.Rectangle(r/15,b-b/40,r-r/15,b-b/25);
        //кулька
        dc.MoveTo(r/2+(b/300+r/300),b/6);
        dc.AngleArc(r/2,b/6,b/300+r/300,0,360);
//столик

dc.Rectangle(r/3,b-b/25,r/3.075,b-b/6);
dc.Rectangle(r-r/3.075,b-b/25,r-r/3,b-b/6);
dc.Rectangle(r/4,b-b/6,r-r/4,b-b/5.5);
dc.Rectangle(r/2.0075,b-b/4.55,r-r/2.0075,b-b/5.5);
//ракетки
dc.Rectangle(r/4,b-b/1.95,r/3.92,b-b/1.55);
dc.Rectangle(r-r/4,b-b/1.95,r-r/3.92,b-b/1.55);
//стеля
dc.Rectangle(r/4,b/17,r-r/4,b/14);
//рух ракеток

for(i=0;b-b/1.55-i>b/14+1.1;i++)
{
dc.SelectObject(&pen_w);
dc.Rectangle(r/4,b-b/1.95-i+1,r/3.92,b-b/1.55-i+1);
dc.SelectObject(&pen_b);
dc.Rectangle(r/4,b-b/1.95-i,r/3.92,b-b/1.55-i);
Sleep(5);
dc.SelectObject(&pen_w);
dc.Rectangle(r-r/4,b-b/1.95-i+1,r-r/3.92,b-b/1.55-i+1);
dc.SelectObject(&pen_b);
dc.Rectangle(r-r/4,b-b/1.95-i,r-r/3.92,b-b/1.55-i);
}
for(i=i;b-b/1.95-i<=b-b/5.5-1.1;i--)
{
dc.SelectObject(&pen_w);
dc.Rectangle(r/4,b-b/1.95-i-1,r/3.92,b-b/1.55-i-1);
dc.SelectObject(&pen_b);
dc.Rectangle(r/4,b-b/1.95-i,r/3.92,b-b/1.55-i);
Sleep(5);
dc.SelectObject(&pen_w);
dc.Rectangle(r-r/4,b-b/1.95-i-1,r-r/3.92,b-b/1.55-i-1);
dc.SelectObject(&pen_b);
dc.Rectangle(r-r/4,b-b/1.95-i,r-r/3.92,b-b/1.55-i);
}
//рух кульки
for(i=0;b/6-i>b/13+(b/300+r/300)/3;i++)
{
dc.SelectObject(&pen_w);
dc.MoveTo(r/2+i-1+(b/300+r/300),b/6-i+1);
dc.AngleArc(r/2+i-1,b/6-i+1,b/300+r/300,0,360);
dc.SelectObject(&pen_b);
dc.MoveTo(r/2+i+(b/300+r/300),b/6-i);
dc.AngleArc(r/2+i,b/6-i,b/300+r/300,0,360);
Sleep(50);
}
