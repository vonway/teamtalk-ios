
#import "MTTBaseViewController.h"

#import "MTTSessionEntity.h"
#import "MTTGroupEntity.h"

@interface DDChattingEditViewController : MTTBaseViewController<UITableViewDataSource,UITableViewDelegate,UICollectionViewDataSource,UICollectionViewDelegate>

@property(assign)BOOL isGroup;
@property(strong)NSString *groupName;
@property(nonatomic,strong)NSMutableArray *items;
@property(strong)MTTSessionEntity *session;
@property(strong)MTTGroupEntity *group;
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) UITableView *tableView;

-(void)refreshUsers:(NSMutableArray *)array;

@end
