 double r,b;
        CRect v;
        GetClientRect (&v);
        r=v.right;
        b=v.bottom;
        //поверхня під столиком
        dc.Rectangle(r/15,b-b/40,r-r/15,b-b/25);
        //кулька
        dc.MoveTo(r/2+(b/400+r/400),b/6);
        dc.AngleArc(r/2,b/6,b/400+r/400,0,360);
//столик
dc.Rectangle(r/3,b-b/25,r/3.075,b-b/6);
dc.Rectangle(r-r/3.075,b-b/25,r-r/3,b-b/6);
dc.Rectangle(r/4,b-b/6,r-r/4,b-b/5.5);
dc.Rectangle(r/2.0075,b-b/4.55,r-r/2.0075,b-b/5.5);
//ракетки
dc.Rectangle(r/4,b-b/1.95,r/3.92,b-b/1.55);
dc.Rectangle(r-r/4,b-b/1.95,r-r/3.92,b-b/1.55);
}
