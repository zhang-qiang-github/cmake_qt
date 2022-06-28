#ifndef GLOBAL_EXPORTS_H
#define GLOBAL_EXPORTS_H


#if (WIN32)
	#ifndef GLOBAL_EXPORTS
		#define GLOBAL_EXPORT __declspec(dllexport)
	#else
		#define GLOBAL_EXPORT __declspec(dllimport)
	#endif // !GLOBAL_EXPORTS

#else
	#define GLOBAL_EXPORT 
#endif


#endif

