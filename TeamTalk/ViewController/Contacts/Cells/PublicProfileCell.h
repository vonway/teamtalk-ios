
#import <UIKit/UIKit.h>

@interface PublicProfileCell : UITableViewCell

@property (nonatomic,strong)UILabel* descLabel;
@property (nonatomic,strong)UILabel* detailLabel;

- (void)setDesc:(NSString *)desc detail:(NSString *)detail;

+(CGFloat)cellHeightForDetailString:(NSString *)string;

@end
