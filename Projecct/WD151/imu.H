#ifndef __IMU_H__
#define __IMU_H__



#define RtA 		  57.324841				//���ȵ��Ƕ�
#define AtR    		0.0174533				//�ȵ��Ƕ�
#define Acc_G 		0.0000610351		//���ٶȱ��G
#define Gyro_G 	0.0610351				  //���ٶȱ�ɶ�   �˲�����Ӧ����2000��ÿ��
#define Gyro_Gr	0.0010653				  //���ٶȱ�ɻ���	�˲�����Ӧ����2000��ÿ��


extern float yaw;
extern float pitch;
extern float roll;				
		//��Ԫ��������ĽǶ�


void IMUupdate(float gx, float gy, float gz, float ax, float ay, float az);



#endif