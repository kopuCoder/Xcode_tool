// Author: Tang Qiao
// Date:   2012-3-2
//
// The macro is inspired from:
//     http://www.yifeiyang.net/iphone-development-skills-of-the-debugging-chapter-2-save-the-log/

#ifdef DEBUG
#define debugLog(...) NSLog(__VA_ARGS__)
#define debugMethod() NSLog(@"%s", __func__)
#else
#define debugLog(...)
#define debugMethod()
#endif

#define EMPTY_STRING        @""

#define STR(key)            NSLocalizedString(key, nil)

#define PATH_OF_APP_HOME    NSHomeDirectory()
#define PATH_OF_TEMP        NSTemporaryDirectory()
#define PATH_OF_DOCUMENT    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]


#define APP_VERSION         [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]

#define RGB(A, B, C)        [UIColor colorWithRed:A/255.0 green:B/255.0 blue:C/255.0 alpha:1.0]

