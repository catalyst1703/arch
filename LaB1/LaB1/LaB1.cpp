#include <iostream>
#include <memory>
#include <time.h>
#include <stdio.h>
#include<time.h>
#include <format>
#include <stdlib.h>


int main()
{
	srand(time(NULL));

	/*const int N = 30000;
	int** matrix_int = new int*[N];
	for (size_t i = 0; i < N; i++)
	{
		matrix_int[i] = new int[N];
	}*/

#pragma region 1

	/*int matrix_test[5][5];
	int vector_test[5][1];
	int result_test[5][1] = { {0}, {0},{0},{0},{0} };

#pragma region seed

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			matrix_test[i][j] = rand() % 5;
		}
		vector_test[i][0] = rand() % 5;
	}

#pragma endregion

#pragma region output

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			std::cout << matrix_test[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << vector_test[i][0];
		std::cout << std::endl;
	}
	std::cout << std::endl;

#pragma endregion

for (int i = 0; i < 5; i++)
{
	for (int k = 0; k < 1; k++)
	{
		for (int j = 0; j < 5; j++)
		{
			result_test[i][k] += matrix_test[i][j] * vector_test[j][k];
		}
	}
}

for (size_t i = 0; i < 5; i++)
{
	std::cout << result_test[i][0];
	std::cout << std::endl;
}*/

#pragma endregion

#pragma region 2

//int matrix_test[5][5];
//int vector_test[1][5];
//int result_test[1][5] = { { 0,0,0,0,0 } };
//
//#pragma region seed
//
//for (size_t i = 0; i < 5; i++)
//{
//	for (size_t j = 0; j < 5; j++)
//	{
//		matrix_test[i][j] = rand() % 5;
//	}
//	vector_test[0][i] = rand() % 5;
//}
//
//#pragma endregion
//
//#pragma region output
//
//for (size_t i = 0; i < 5; i++)
//{
//	std::cout << vector_test[0][i] << " ";
//}
//std::cout << std::endl;
//std::cout << std::endl;
//
//for (size_t i = 0; i < 5; i++)
//{
//	for (size_t j = 0; j < 5; j++)
//	{
//		std::cout << matrix_test[i][j] << " ";
//	}
//	std::cout << std::endl;
//}
//
//std::cout << std::endl;
//
//
//#pragma endregion
//
//for (int i = 0; i < 1; i++)
//{
//	for (int k = 0; k < 5; k++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			result_test[i][k] += vector_test[i][j] * matrix_test[j][k];
//		}
//	}
//}
//
//for (size_t i = 0; i < 5; i++)
//{
//	std::cout << result_test[0][i] << " ";
//}
//std::cout << std::endl;
#pragma endregion

#pragma region 3

//int matrix_test[5][5];
//	int vector_test[5][1];
//	int result_test[5][1] = { {0}, {0},{0},{0},{0} };
//
//#pragma region seed
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		for (size_t j = 0; j < 5; j++)
//		{
//			matrix_test[i][j] = rand() % 5;
//		}
//		vector_test[i][0] = rand() % 5;
//	}
//
//#pragma endregion
//
//#pragma region output
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		for (size_t j = 0; j < 5; j++)
//		{
//			std::cout << matrix_test[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	std::cout << std::endl;
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		std::cout << vector_test[i][0];
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//
//#pragma endregion
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			for (int k = 0; k < 1; k++)
//			{
//				result_test[i][k] += matrix_test[i][j] * vector_test[j][k];
//			}
//		}
//	}
//		
//			
//
//for (size_t i = 0; i < 5; i++)
//{
//	std::cout << result_test[i][0];
//	std::cout << std::endl;
//}

#pragma endregion


#pragma region m*v(int)
	/*int vector_int1[N][1];
	int result_int1[N][1];
	for (int n = 1000; n <= N; n += 1000)
	{


		int time_int1 = clock();
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < 1; k++)
			{
				for (int j = 0; j < n; j++)
				{
					result_int1[i][k] += matrix_int[i][j] * vector_int1[j][k];
				}
			}
		}
		std::cout << std::format("m*v: {0} seconds n = {1}\n", (float)(clock() - time_int1) / 1000, n);
	}*/
#pragma endregion

#pragma region v*m(int)
	/*int vector_int2[1][N];
	int result_int2[1][N];
	for (int n = 1000; n <= N; n += 1000)
	{

		int time_int2 = clock();
		for (int i = 0; i < 1; i++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int j = 0; j < n; j++)
				{
					result_int2[i][k] += vector_int2[i][j] * matrix_int[j][k];
				}
			}
		}
		std::cout << std::format("v*m: {0} seconds n = {1}\n", (float)(clock() - time_int2) / 1000, n);
	}*/
#pragma endregion

#pragma region opt.int
	/*int vector_int3[N][1];
	int result_int3[N][1];

	for (size_t n = 1000; n <= N; n+=1000)
	{
		int time_int3 = clock();
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				for (int k = 0; k < 1; k++) result_int3[i][k] += matrix_int[i][j] * vector_int3[j][k];

		std::cout << std::format("m*v optimized: {0} seconds n = {1}\n", (float)(clock() - time_int3) / 1000, n);
	}		 */

#pragma endregion

	/*float** matrix_float = new float* [N];
	for (size_t i = 0; i < N; i++)
	{
		matrix_float[i] = new float[N];
	}*/

#pragma region float1
	/*float vector_float1[N][1];
	float result_float1[N][1];
	for (int n = 1000; n <= N; n += 1000)
	{


		int time_float1 = clock();
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < 1; k++)
			{
				for (int j = 0; j < n; j++)
				{
					result_float1[i][k] += matrix_float[i][j] * vector_float1[j][k];
				}
			}
		}
		std::cout << std::format("m*v: {0} seconds n = {1}\n", (float)(clock() - time_float1) / 1000, n);
	}*/
#pragma endregion

#pragma region float2
	/*float vector_float2[1][N];
	float result_float2[1][N];
	for (int n = 1000; n <= N; n += 1000)
	{
		int time_float2 = clock();
		for (int i = 0; i < 1; i++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int j = 0; j < n; j++)
				{
					result_float2[i][k] += vector_float2[i][j] * matrix_float[j][k];
				}
			}
		}
		std::cout << std::format("v*m: {0} seconds n = {1}\n", (float)(clock() - time_float2) / 1000, n);
	}*/
#pragma endregion

#pragma region float3
	/*float vector_float3[N][1];
	float result_float3[N][1];

	for (size_t n = 1000; n <= N; n+=1000)
	{
		int time_float3 = clock();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < 1; k++)
				{
					result_float3[i][k] += matrix_float[i][j] * vector_float3[j][k];
				}
			}
		}
		std::cout << std::format("m*v optimized: {0} seconds n = {1}\n", (float)(clock() - time_float3) / 1000, n);
	}		 */

#pragma endregion


	/*double** matrix_double = new double* [N];
	for (size_t i = 0; i < N; i++)
	{
		matrix_double[i] = new double[N];
	}*/

#pragma region double1

	/*double vector_double1[N][1];
	double result_double1[N][1];
	for (int n = 1000; n <= N; n += 1000)
	{


		int time_double1 = clock();
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < 1; k++)
			{
				for (int j = 0; j < n; j++)
				{
					result_double1[i][k] += matrix_double[i][j] * vector_double1[j][k];
				}
			}
		}
		std::cout << std::format("m*v: {0} seconds n = {1}\n", (float)(clock() - time_double1) / 1000, n);
	}*/

#pragma endregion

#pragma region double2

	/*double vector_double2[1][N];
	double result_double2[1][N];
	for (int n = 1000; n <= N; n += 1000)
	{
		int time_double2 = clock();
		for (int i = 0; i < 1; i++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int j = 0; j < n; j++)
				{
					result_double2[i][k] += vector_double2[i][j] * matrix_double[j][k];
				}
			}
		}
		std::cout << std::format("v*m: {0} seconds n = {1}\n", (float)(clock() - time_double2) / 1000, n);
	}*/

#pragma endregion

#pragma region double3

	/*double vector_double3[N][1];
	double result_double3[N][1];

	for (size_t n = 1000; n <= N; n+=1000)
	{
		int time_double3 = clock();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < 1; k++)
				{
					result_double3[i][k] += matrix_double[i][j] * vector_double3[j][k];
				}
			}
		}
		std::cout << std::format("m*v optimized: {0} seconds n = {1}\n", (float)(clock() - time_double3) / 1000, n);
	}	*/

#pragma endregion




}

