//Este proyecto fue creado por Diana Rosales
//La fecha de entrega es 1 de Octubre 2018
#include<stdio.h>
#include<math.h>
int main() {
//9 planetas

	FILE *fp;
	double xo, yo, zo, vxo, vyo, vzo, xn, yn, zn, vxn, vyn, vzn, r;
	float h=0.01;
	int tiempo, n, numplan, to=0, t;
	

	fp=fopen("resumen1.txt","r");
	
	for(n=1;n<10;n++){
		fscanf(fp,"%i %lf %lf %lf %lf %lf %lf %i \n",&tiempo,&xo,&yo,&zo,&vxo,&vyo,&vzo,&numplan);
		fclose(fp);
		 			
	
				if(numplan==1){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("mercurio.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}

				if(numplan==2){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("venus.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}

				if(numplan==3){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("tierra.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}
				if(numplan==4){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("marte.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}
			if(numplan==5){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("jupiter.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}

				if(numplan==6){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("saturno.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}

				if(numplan==7){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("urano.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}

				if(numplan==8){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("neptuno.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}

				if(numplan==9){
				
						for(t=to;t<=1;t+=h){
							xn=xo+(vxo*t);
							yn=yo+(vyo*t);
							zn=zo+(vzo*t);
							r=sqrt(pow(xn,2)*pow(yn,2)*pow(zn,2));
							vxn=vxo-(t*(((4/365)*xo)/pow(r,3)));
							vyn=vxo-(t*(((4/365)*yo)/pow(r,3)));
							vzn=vxo-(t*(((4/365)*zo)/pow(r,3)));	

					fp=fopen("pluton.txt","w");
					fprintf(fp,"%lf %lf %lf %lf %lf %lf",xn,yn,zn,vxn,vyn,vzn);
					fclose(fp);
								  }

						}
			}

	}
