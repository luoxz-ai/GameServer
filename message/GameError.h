/*
* Generate by develop
*/
#ifndef _GAMEERROR_H_
#define _GAMEERROR_H_

#define ERROR_LEADER_CAN_CANCLE_MATCH  -4723    // 只有队长才能取消匹配
#define ERROR_LEADER_CAN_MATCH       -4722    // 只有队长才能匹配
#define ERROR_TEAMER_NOT_IN_SCENE    -4721    // 必须所有队员都在准备场景才能匹配
#define ERROR_TEAMER_NOT_ENOUGH      -4720    // 队伍必须满人才能报名巅峰对决
#define ERROR_TRAVEL_PEAK_NOT_OPEN   -4719    // 活动时间未到
#define ERROR_TRAVE_PEAK_KNOCKOUT    -4718    // 您的战队已被淘汰
#define ERROR_NO_SIGN_TRAVPEAK       -4717    // 您的战队未报名
#define ERROR_HAS_SIGNUP_TRAVPEAK    -4716    // 您已报名
#define ERROR_NO_TRAVEL_TEAM         -4715    // 您没有创建战队
#define ERROR_OPEN_SERVER_DAY        -4714    // 已开服天数不足
#define ERROR_TRAVEL_PEAK_NOT_SIGNUP_TICK  -4713    // 报名时间未开始
#define ERROR_NOT_ENOUGH_FORCE       -4712    // 战力不足，不能加入该战队
#define ERROR_NO_INVITE_TRAVEL_TEAM  -4711    // 您没有被邀请进入战队
#define ERROR_TRAVEL_TEAM_LEADER_LEAVE  -4710    // 队长不能离队
#define ERROR_NOT_IN_TRAVEL_TEAM     -4709    // 该玩家不在战队中
#define ERROR_NO_TRAVEL_TEAM_LEADER  -4708    // 您不是战队的队长
#define ERROR_TRAVEL_TEAM_FULL       -4707    // 战队已满人
#define ERROR_TRAVEL_TEAM_DIMISSED   -4706    // 该战队已解散
#define ERROR_FORBIT_APPLY_IN_ACTIVITY_TICK  -4705    // 活动期间内不允许加入战队
#define ERROR_TRAVEL_TEAM_NAME_REPEAT  -4704    // 战队名字已存在
#define ERROR_PLAYER_IN_TRAVEL_TEAM  -4703    // 玩家已在战队里
#define ERROR_TARGET_HAS_TRAVEL_TEAM  -4702    // 该玩家已有战队
#define ERROR_SELF_HAS_TRAVEL_TEM    -4701    // 您已有战队
#define ERROR_CAN_NOT_BUY_TRANSFER   -4609    // 该变身不能购买
#define ERROR_OPEN_REWARD_IS_GET     -4608    // 该奖励已领取
#define ERROR_USE_SAME_TRANSFER      -4607    // 你正在使用该变身
#define ERROR_IN_TRANSFER_TIME       -4606    // 变身期间只能使用变身技能
#define ERROR_TRANSFER_IS_IN_USE     -4605    // 不能在变身期间切换变身
#define ERROR_TRANSFER_IN_COOL       -4604    // 变身正在冷却中
#define ERROR_HAS_NOT_USE_TRANSFER   -4603    // 请先使用一个变身
#define ERROR_HAS_NOT_TRANSFER       -4602    // 你还没有该变身，不能使用
#define ERROR_TRANSFER_HAS_NOT_OPEN  -4601    // 变身系统还未开启
#define ERROR_TREASURE_BUY_LIMIT     -4503    // 藏宝阁购买已达到上限
#define ERROR_HAS_GET_REWARD         -4502    // 今日已领取藏宝阁奖励
#define ERROR_HIDDEN_TREASURE_NOT_OPEN  -4501    // 没有开启藏宝阁功能
#define ERROR_EXP_NOT_ENOUGH         -4407    // 奖池经验不足
#define ERROR_CHANGE_SAME_STYLE_LV   -4406    // 你已是该幻化等级
#define ERROR_CHANGE_STYLE_LV_MAX    -4405    // 要进行的幻化等级还未开启
#define ERROR_IS_MAX_LEVEL           -4404    // 剑池达到最大等级
#define ERROR_TASK_HAS_FINISH        -4403    // 该任务已完成
#define ERROR_SWORD_POOL_IS_NOT_OPEN  -4402    // 剑池系统还未开放
#define ERROR_LAST_TASK_IS_FINISH    -4401    // 昨日任务已全部完成
#define ERROR_IN_TRANSFER            -4324    // 变身中，不能变成器械
#define ERROR_HAVE_TRANSF            -4323    // 已处于器械状态，不能重复变身
#define ERROR_LRF_NO_RESOURCE        -4322    // 资源积分不足
#define ERROR_LEAGUE_NO_QUALITY      -4321    // 未获得本次活动的参与资格，请继续努力
#define ERROR_NO_PLAYER_HERE         -4316    // 附近没有玩家可以双修
#define ERROR_PLAYER_NO_HERE         -4315    // 玩家不在该场景
#define ERROR_BET_TIME_NOT_ARRIVE    -4314    // 竞猜时间未到
#define ERROR_ARENA_BUY_LIMIT        -4313    // 购买次数已达上限
#define ERROR_ESCORT_PROTECT_LIMIT   -4312    // 护送人数已达上限
#define ERROR_ESCORT_IS_PROTECT      -4311    // 正在护送保护
#define ERROR_ESCORT_START           -4310    // 正在护送
#define ERROR_ESCORT_PROTECT_ERROR   -4309    // 保护目标不存在
#define ERROR_ESCORY_ROB             -4308    // 护送被劫
#define ERROR_ESCORT_OVER_TIME       -4307    // 护送超时
#define ERROR_PLAYER_HAS_CHOOSE      -4306    // 玩家已经下过注
#define ERROR_HOTSPRING_ON_START     -4305    // 竞赛已开始，不可下注
#define ERROR_SECOND_HAS_UNBIND      -4304    // 目标玩家已经解除绑定
#define ERROR_FIRST_HAS_UNBIND       -4303    // 请求玩家已经解除绑定
#define ERROR_SECOND_HAS_BIND        -4302    // 目标玩家正在双修
#define ERROR_FIRST_HAS_BIND         -4301    // 请求玩家正在双修
#define ERROR_PLAYER_FULL            -4206    // 该boss场景内人数已满
#define ERROR_NOT_WORLD_BOSS_SCENE   -4205    // 请求进入的不是世界boss场景
#define ERROR_HAS_PLAY_DICE          -4204    // 你已经投过骰子
#define ERROR_BOSS_IS_ALIVE          -4203    // boss还未死亡
#define ERROR_NOT_SAME_LEAGUE        -4202    // 非同帮成员不能抢红包
#define ERROR_HAS_GET_POCKET         -4201    // 不能重复领取红包
#define ERROR_TIME_IS_OVER           -4200    // 抢红包时间已过
#define ERROR_RAMA_UPGRADE_GOODS     -4101    // 罗摩升级物品不足
#define ERROR_RAMA_UPGRADE_REIKI     -4100    // 罗摩升级灵气不足
#define ERROR_ILLUS_ITEM_COUNT_ERROR  -4000    // 升级物品不足
#define ERROR_LEADER_CAN_NOT_LEAVE   -3934    // 在有成员的情况下帮主无法退帮
#define ERROR_CHEER_SAME_PLAYER      -3933    // 不能对一个玩家助威或鼓舞多次
#define ERROR_CHEER_PLAYER           -3932    // 不能对没进入过副本的玩家进行助威或鼓舞
#define ERROR_BE_CHEER_TIMES_LIMIT   -3931    // 受助威或鼓舞次数已达到上限
#define ERROR_CHEER_TIMES_LIMIT      -3930    // 助威或鼓舞次数已达到上限
#define ERROR_ENCOURAGE_WAVE_LIMIT   -3929    // 只有比自己低10波的人才能进行鼓舞
#define ERROR_CHEER_WAVE_LIMIT       -3928    // 只有比自己高10波的人才能进行助威
#define ERROR_CHEER_SELF             -3927    // 不能对自己进行助威或鼓舞
#define ERROR_ELDER_CAN_IMPEACH_LEADER  -3926    // 只有长老职位以上才能弹劾帮主
#define ERROR_ACTIVITY_RENAME_LEAGUE  -3925    // 帮派活动期间不能修改帮派名称
#define ERROR_DEPUTY_CAN_KICK        -3924    // 副帮主以上才能踢出玩家
#define ERROR_MAX_LEAGUE_SKILL       -3923    // 帮派技能等级达到最高
#define ERROR_HAS_VOTE               -3922    // 你已经投票
#define ERROR_NOT_IN_IMPEACH         -3921    // 帮派不处于弹劾帮主时间
#define ERROR_IS_IN_IMPEACH          -3920    // 帮派处于弹劾帮主时间中
#define ERROR_CANNOT_IMPEACH_LEADER  -3919    // 帮主离线时间不足3天
#define ERROR_IMPEACH_MYSELF         -3918    // 不能对自己发起弹劾
#define ERROR_FLAG_IS_HIGHEST        -3917    // 帮旗已达到最高级
#define ERROR_LEAGUE_ACTIVITY_TIME   -3916    // 帮派活动期间不能退出帮派
#define ERROR_LIMIT_TIME_TO_LBOSS    -3915    // 离开帮派后30分钟内不能进入帮派boss
#define ERROR_ENTER_FAILURE          -3914    // 进入时初始化失败
#define ERROR_SPACE_IS_FULL          -3913    // 该战区人数已满
#define ERROR_NOT_HAS_THIS_SPACE     -3912    // 该战区还未开启
#define ERROR_IN_SAME_SPACE          -3911    // 你已在当前房间（战区）
#define ERROR_FLAG_EXP_NOT_ENOUGH    -3910    // 升级帮旗经验不足
#define ERROR_HAS_LEAGUE_BOSS        -3909    // boss已经存在
#define ERROR_IN_LEAGUE_BOSS         -3908    // 已在帮派驻地
#define ERROR_NOT_IN_SUMMON_TIME     -3907    // 不在召唤时间内，不能召唤boss
#define ERROR_POSITION_NOT_ENOUGH    -3906    // 帮主和副帮主才能进行普通召唤
#define ERROR_DONATE_NOT_ENOUGH      -3905    // 你捐献的物品不足
#define ERROR_FEED_NOT_ENOUGH        -3904    // 你喂养的物品不足
#define ERROR_BOSS_LV_MAX            -3903    // boss的可喂养等级达到上限
#define ERROR_BOSS_HAS_SUMMON        -3902    // 该boss已经被召唤
#define ERROR_FEED_BOOS_ITEM         -3901    // 你不能用此物品喂养boss
#define ERROR_TALISMAN_NOT_FIND_ACTIVE  -3711    // 所需道具不足
#define ERROR_MAGICW_QUALITY_NOT_OPEN  -3710    // 注灵将在淬炼二阶零星开启
#define ERROR_MAGIC_WEAPON_HAS_ADRON  -3709    // 已经佩戴有罗摩，请先卸下
#define ERROR_MAGIC_WEAPON_SKILL_TOP_LVL  -3708    // 技能已经达到满级
#define ERROR_MAGIC_WEAPON_CANNOT_ACTIVE  -3707    // 罗摩不是可激活状态
#define ERROR_MAGIC_WEAPON_NOT_ACTIVE  -3706    // 罗摩未激活
#define ERROR_MAGIC_WEAPON_QUALITY_TOP_LVL  -3705    // 罗摩品质已经达到满级
#define ERROR_MAGIC_WEAPON_RANK_TOP_LVL  -3704    // 罗摩品阶已经达到满级
#define ERROR_MAGIC_WEAPON_SKILL_NOT_LVL  -3703    // 罗摩品质没有达到技能激活等级
#define ERROR_MAGICWEAPON_NOT_FOUND  -3702    // 没有找到罗摩信息
#define ERROR_MAGICWEAPON_OPEN_LEVEL  -3701    // 玩家未达到罗摩开放等级
#define ERROR_OP_IN_ACTIVITY_TICK    -3610    // 活动期间内禁止此操作
#define ERROR_TRADE_GRID_LOCKED_NOPOP  -3433    // 你已经锁定交易，不能取出物品
#define ERROR_TRADE_GOODS_NOT_FIND   -3432    // 清空交易栏，整理背包后重试
#define ERROR_TRADE_DES_LOCKED_TRADE  -3431    // 对方玩家已经锁定交易
#define ERROR_TRADE_DES_REFUSE       -3430    // 对方拒绝了你的邀请
#define ERROR_TRADE_REQUEST_SUCESS   -3429    // 交易请求已经发送，请耐心等待
#define ERROR_TRADE_DES_OFFLINE      -3428    // 玩家离线，交易取消
#define ERROR_TRADE_SUCCESS          -3427    // 交易成功
#define ERROR_TRADE_DES_CANCEL_TRADE  -3426    // 对方取消了交易
#define ERROR_TRADE_DES_OVER_DISTANCE  -3425    // 目标距离太远,交易取消
#define ERROR_TRADE_EQU_JEWEL_NO_TRADE  -3424    // 禁止镶嵌有宝石的装备进行此操作
#define ERROR_TRADE_REQUEST_IGNORE   -3423    // 你的请求被忽略
#define ERROR_TRADE_OWN_GRID_LOCKED  -3422    // 你已经锁定交易，不能放入物品
#define ERROR_NOT_BOTH_IN_LOCKED     -3421    // 你或者对方当前没有锁定交易
#define ERROR_TRADE_GIRD_AMOUNT_OVER_LIMIT  -3420    // 单个格子存放数目超过限制
#define ERROR_TRADE_DES_LEVEL_LIMIT  -3419    // 对方等级没有达到30级，未开启交易功能
#define ERROR_TRADE_OWN_LEVEL_LIMIT  -3418    // 你等级不足，请努力提升到30级
#define ERROR_TRADE_BIND_CANNOT_TRADE  -3417    // 绑定道具不能进行交易
#define ERROR_TRADE_DES_STATE_REQUESTING  -3416    // 对方正在交易请求中
#define ERROR_TRADE_OVER_ONE_SCREEN  -3415    // 双方距离超过一屏，交易取消
#define ERROR_TRADE_DES_BOXS_LACK    -3414    // 对方玩家背包格子不足，交易失败
#define ERROR_TRADE_OWN_BOXS_LACK    -3413    // 你的背包格子不足，交易失败
#define ERROR_TRADE_OWN_ITEMS_OVERLIMIT  -3412    // 交易道具已达上限，无法放入
#define ERROR_TRADE_OWN_STATE_WAITING  -3410    // 你正处于响应中
#define ERROR_TRADE_OWN_STATE_REQUESTING  -3409    // 你正在请求交易
#define ERROR_TRADE_OVER_DISTANCE    -3408    // 目标距离太远
#define ERROR_TRADE_NO_IN_CURRSCENE  -3407    // 对方不在当前场景中
#define ERROR_TRADE_OPPONENT_FIGHTING  -3406    // 对方正在战斗状态，交易取消
#define ERROR_TRADE_OWN_FIGHTING     -3405    // 你正在战斗状态，交易取消
#define ERROR_TRADE_OPPONENT_TRADE_PROCESS  -3404    // 对方玩家已经在交易
#define ERROR_TRADE_OWN_TRADE_PROCESS  -3403    // 你已经在交易中
#define ERROR_TRADE_OPPONENT_NOTOPEN  -3402    // 对方没有开启交易功能
#define ERROR_TRADE_OWN_NOTOPEN      -3401    // 你没有开启交易功能
#define ERROR_LSIEGE_SIGNUP_CAN_TRANS  -3213    // 没有报名无法进入太虚密室！
#define ERROR_LSIEGE_ADMIRE_SELF     -3212    // 无法敬仰自己
#define ERROR_LSIEGE_DEFENE_NO_SIGNUP  -3211    // 防守方不用申请攻城
#define ERROR_LSIEGE_NOT_OCCUPY_LEAGUE  -3210    // 只有占领的帮派成员才可购买
#define ERROR_LSIEGE_DAY_BUY         -3209    // 超出每日限购数量
#define ERROR_LSIEGE_NO_OCCUPIER     -3208    // 没有领主可敬仰
#define ERROR_LSIEGE_HAS_ADMIRED     -3207    // 今天已经敬仰过了
#define ERROR_LSIEGE_SIGNUP_TIME     -3206    // 还没到攻城战的报名时间
#define ERROR_LSIEGE_NO_SIGNUP       -3205    // 你没有报名帮派攻城
#define ERROR_HAS_SIGNUP_LSIEGE      -3204    // 你已经宣告攻城
#define ERROR_LSIEGE_LEAGUE_SIZE     -3203    // 帮派数量不足
#define ERROR_LSIEGE_OPEN_DATE       -3202    // 开服三天内不能报名
#define ERROR_LEAGUE_NOT_LEADER      -3201    // 你不是帮派的帮主
#define ERROR_ACT_CHANGE_MAX         -3134    // 已达到活动期间最大兑换数
#define ERROR_EVERY_DAY_CHANGE_MAX   -3133    // 已达到每天最大兑换数
#define ERROR_HAS_SEND_RUN           -3132    // 你今天已助跑该好友
#define ERROR_HELP_RUN_LIMIT         -3131    // 助跑好友次数达到上限
#define ERROR_FRIEND_HELP_RUN_LIMIT  -3130    // 好友被助跑次数达到上限
#define ERROR_CHANGE_TICK_UPPER_LIMIT  -3129    // 换取的时间超过上限
#define ERROR_ALL_EGG_IS_OPEN        -3128    // 你已经砸完了所有蛋，请重置再砸
#define ERROR_REWARD_GET_LIMIT       -3127    // 你还没达到领取该奖励的要求，请继续努力
#define ERROR_SLOT_IS_OPEN           -3126    // 该格子已经开启
#define ERROR_COLUMN_FIND_WORD       -3125    // 该列已找到文字，不能再开
#define ERROR_NINE_WORD_IS_ALL       -3124    // 九字已全开，请重置后再开
#define ERROR_COUPLE_ACT_HAS_GET_REWARD  -3123    // 这次活动您已经领取过该奖励
#define ERROR_COUPLE_ACT_NO_RANK     -3122    // 这次您不在排行榜上，不能领取奖励
#define ERROR_NOT_IN_BUY_TIME        -3121    // 不在秒杀时间内，不能购买
#define ERROR_AWARD_CAN_NOT_GET      -3120    // 秒杀次数不足以领取改奖励
#define ERROR_AWARD_HAS_GET          -3119    // 该奖励已领取
#define ERROR_PERSON_LIMIT           -3118    // 个人限购次数已满
#define ERROR_SERVER_LIMIT           -3117    // 全服限购次数已满
#define ERROR_ACTIVITY_TIME_INVALID  -3116    // 不在活动时间内
#define ERROR_REQ_FLOWER_TIME_LIMIT  -3115    // 求花时间CD未到
#define ERROR_WILDQIXI_ALREADY_IN    -3114    // 你已在活动场景中
#define ERROR_ACT_HAS_END            -3111    // 当前活动已结束，正在计算奖励
#define ERROR_FUSION_FORBIT_TRANSFER  -3110    // 熔恶之地无法使用传送
#define ERROR_ACT_REWARD_ERROR_COUNT  -3109    // 奖励领取数量错误
#define ERROR_ACT_NO_REWARD          -3108    // 没有可领取的奖励
#define ERROR_AGENT_NO_SUCH_ACT      -3107    // 当前渠道未开放该活动
#define ERROR_NO_FUN_ACTIVITY        -3106    // 开服活动不存在或结束已久
#define ERROR_FUN_ACTIVITY_TIME      -3105    // 活动时间已结束，如有奖励将通过邮件发放
#define ERROR_ACTIVITY_NO_OPEN       -3104    // 活动时间未到
#define ERROR_PLAYER_SELF_BET        -3103    // 该场参战玩家不可下注
#define ERROR_JOIN_AGAIN             -3102    // 重复参加
#define ERROR_NO_VACANCY             -3101    // 参加名额已满
#define ERROR_CLIENT_ACCELERATE      -3003    // 加速警告
#define ERROR_SERVER_CLOSE           -3002    // 服务器维护中
#define ERROR_ROLE_OCCUPATE          -3001    // 玩家被顶号
#define ERROR_WRONG_PARTNER_ID       -2616    // 结婚对象不是原伴侣
#define ERROR_NO_RING                -2615    // 请先购买婚戒
#define ERROR_IS_BROTHER             -2614    // 不能与结义对象结婚
#define ERROR_WEDDING_GIFTBOX_AMOUNT  -2613    // 今日可拾取喜盒数量已达上限
#define ERROR_WEDDING_READY_START    -2612    // 婚礼举行时不能操作
#define ERROR_PLAYER_CRUISE          -2611    // 玩家正在巡游
#define ERROR_GIFTBOX_OWNER          -2610    // 此礼盒作为答谢来宾之用，你不可拾取
#define ERROR_WED_SEX_SAME           -2609    // 结婚双方需为异性
#define ERROR_KEEPSAKE_TOPLEVEL      -2608    // 信物已达最高级
#define ERROR_NO_WEDDING             -2607    // 玩家没有结婚
#define ERROR_WEDDING_DAY_TIMES      -2606    // 今日举办婚礼次数已用完
#define ERROR_NOT_IN_WEDDING_SCENE   -2605    // 结婚双方需同时在此
#define ERROR_INTIMACY_LIMIT_FOR_WEDDING  -2604    // 亲密度不足
#define ERROR_TARGET_HAS_WEDDING     -2603    // 双方必须为未婚玩家
#define ERROR_HAS_WEDDING            -2602    // 双方必须为未婚玩家
#define ERROR_WEDDING_TEAMER_SIZE    -2601    // 请与你的结婚对象组队来此登记
#define ERROR_MAX_RANK_RECORD_AMOUNT  -2201    // 已经到达排行榜底部
#define ERROR_CHAT_TIMES_LIMIT       -2112    // 请提升vip开启更多的聊天次数
#define ERROR_CHAT_PRIVATE_LEVEL     -2111    // 您的等级不足，暂未开启会话频道聊天功能
#define ERROR_CHAT_TEAM_LEVEL        -2110    // 您的等级不足，暂未开启队伍频道聊天功能
#define ERROR_CHAT_LEAGUE_LEVEL      -2109    // 您的等级不足，暂未开启帮派频道聊天功能
#define ERROR_CHAT_NORMAL_LEVEL      -2108    // 您的等级不足，暂未开启世界频道聊天功能
#define ERROR_SCENE_LIMIT_FLAUNT_POSITION  -2107    // 该场景不能发送坐标
#define ERROR_HAVE_BANNED            -2106    // 你已经被对方加入黑名单，无法发送信息
#define ERROR_IN_BACK_LIST           -2105    // 无法对黑名单玩家发送消息。请先移除黑名单
#define ERROR_FORBID_SPEAK           -2104    // 叫破喉咙吧，你被禁言了
#define ERROR_CHAT_CONTENT_LENGTH_LIMIT  -2103    // 聊天内容最多可输入50字
#define ERROR_WORLD_CHAT_LEVEL_LIMIT  -2102    // 达到30级即可发言
#define ERROR_CHAT_LIMIT_INTERVAL    -2101    // 发言过于频繁
#define ERROR_DOWNLOAD_BOX_GIFT_NOT_OPEN  -2056    // 当前未开放此功能
#define ERROR_WAIT_ITEM_UNDO         -2055    // 等待其他玩家购买返回
#define ERROR_LEAGUE_FB_FINISHED     -2054    // 已参加过帮派守护
#define ERROR_IN_TRAVEL_ACTIVITY     -2038    // 跨服活动期间禁止此操作
#define ERROR_IN_BLACK               -2037    // 已在黑名单中
#define ERROR_CAN_ADD_SELF           -2036    // 不能添加自己为好友
#define ERROR_SHORT_CONTRIBUTION     -2035    // 帮派贡献不足
#define ERROR_TEAMER_LEVEL_LIMIT     -2034    // 队友等级不足
#define ERROR_LEAGE_LEADER_CAN_RENAME  -2033    // 只有帮主才有权限修改帮派名称
#define ERROR_APPLY_REPEATED         -2032    // 你已经申请了该物品
#define ERROR_ESCORT_NOT_EXIT        -2031    // 镖车不存在，将寻路到NPC
#define ERROR_ENOURH_LEAGUE          -2030    // 帮派数不足，活动暂不开启
#define ERROR_NO_PICKUP_RIGHT        -2029    // 没有拾取权限
#define ERROR_ABILITY_LARGE          -2028    // 资质已满无法继续提升
#define ERROR_MEDIA_GIFT_PACKAGE     -2026    // 背包空间不足，已通过邮件发送
#define ERROR_MEDIA_GIFT_TIME_SPAN   -2025    // 领取时间未到
#define ERROR_MEDIA_GIFT_LVL_LIMIT   -2024    // 当前等级不能领取礼包
#define ERROR_MEDIA_GIFT_USE_TIMES   -2023    // 该礼包不能再领了
#define ERROR_ACTI_CODE_NOT_SUIT     -2022    // 激活码平台不符
#define ERROR_ACTI_CODE_UNVALID      -2021    // 激活码不正确
#define ERROR_LEAGUE_MAX_CONTRIBUTE  -2019    // 本日贡献已达上限
#define ERROR_ACTI_CODE_USED         -2018    // 该激活码已经被使用
#define ERROR_COMBINE_BEAST_ABILITY  -2015    // 主副宠资质差过大，不可融合
#define ERROR_YOU_IN_ESCORT          -2014    // 运镖中，不能传送
#define ERROR_PESCORT_CAR_FAIL       -2013    // 你的镖车已被劫走
#define ERROR_ALREADY_IN_LEAGUE      -2010    // 已在此帮派里
#define ERROR_CANNOT_BET             -2009    // 当前不可下注
#define ERROR_TEAM_MIN_N             -2008    // 队伍人数太少
#define ERROR_ADDED_FRIEND_LOW_LEVEL  -2007    // 对方玩家等级过低
#define ERROR_ADD_FRIEND_LEVEL_LIMIT  -2006    // 你等级不足，无法添加好友，请努力升级
#define ERROR_IN_BLACK_LIST          -2005    // 已被对方屏蔽
#define ERROR_IN_SELF_BLACK_LIST     -2004    // 玩家在自己黑名单中
#define ERROR_IS_TEAMER              -2003    // 对方已加入其他队伍
#define ERROR_REWARD_DRAWED          -2002    // 奖励已领取
#define ERROR_NO_REWARD              -2001    // 没有奖励
#define ERROR_CAREER_ERROR           -1909    // 职业不匹配
#define ERROR_VIP_NOT_ENOUGH         -1908    // VIP等级不足，无法购买
#define ERROR_MALL_ACTIVITY_BUY_TOTAL_LIMIT  -1907    // 总共购买数量已达上限
#define ERROR_MALL_DONATE_GOOD_PAY_WAY  -1906    // 使用礼金购买的物品不能赠送
#define ERROR_MALL_ITEM_NOT_EXIST    -1905    // 商城没有该物品，购买失败
#define ERROR_MALL_ITEM_VIP_CAN_BUY  -1904    // 只有vip才能购买该商城物品，请升级为vip
#define ERROR_MALL_ACTIVITY_TOTAL_BUY_LIMIT  -1903    // 该商品今日限购数量已达上限
#define ERROR_MALL_ACTIVITY_SINGLE_BUY_LIMIT  -1902    // 商城活动购买，个人限购已达上限
#define ERROR_ALREADY_OBTAIN_FASHION  -1901    // 你已拥有该时装，无需商城购买
#define ERROR_FLOOR_NOT_ENOUGH       -1854    // 武林论剑通过层数不足已开启此技能
#define ERROR_OPEN_SERVER_DAY_NOT_ENOUGH  -1853    // 开服天数未达到要求，不能进入副本
#define ERROR_NOT_IN_NORMAL_SCENE    -1852    // 队伍有人在活动场景中
#define ERROR_COUPLE_REJECT_ENTER_FB  -1851    // 你的对象拒绝进入爱情试炼副本
#define ERROR_COUPLE_CAN_BUY_COUPLE_FB  -1850    // 只有结婚才能购买爱情试炼副本次数
#define ERROR_COUPLE_CAN_ENTER_COUPLE_FB  -1849    // 只有夫妻才能进行爱情试炼副本
#define ERROR_TRVL_SCRIPT_SCERET     -1848    // 密码不匹配
#define ERROR_SPECIAL_AWARD_CAN_NOT_GET  -1847    // 奖励未达成或已领取
#define ERROR_MUST_SWEEP             -1846    // 请先进行扫荡
#define ERROR_CHAPTER_ID             -1845    // 前置场景未完成或该场景已完成
#define ERROR_WAVE_NOT_IN_SCENE      -1844    // 挑战波数不在该场景中
#define ERROR_IS_HGIHEST_FLOOR       -1843    // 已在最高层
#define ERROR_SCRIPT_VIP_BUY_MAX     -1842    // 重置次数已用完
#define ERROR_NOT_FLOOR_SWEEP        -1841    // 无关卡可扫荡
#define ERROR_IS_SWEEP               -1840    // 已经进行过扫荡
#define ERROR_SCRIPT_ENTERED         -1839    // 已进入场景
#define ERROR_STRENTH_NOT_ENOUGH     -1838    // 体力不足
#define ERROR_SKILL_NO_CHOOSE_TARGET  -1837    // 请先选择目标
#define ERROR_SCRIPT_NOT_PASSSED     -1836    // 该副本尚未通关
#define ERROR_SCRIPT_COST_VIT_NOT_ENOUGH  -1835    // 有玩家体力不足
#define ERROR_GATHERED_SCRIPT_SKILL  -1834    // 当前已携带副本技能
#define ERROR_SCRIPT_SCENE_LIMIT     -1833    // 您正处于异空间，无法进入副本
#define ERROR_MONSTER_TOWER_SCRIPT_OPEN_TIME  -1832    // 镇魔塔活动时间未到
#define ERROR_SCRIPT_CLEAN_VIP_LEVEL  -1831    // 等级不足
#define ERROR_MACHINE_CANT_BE_LEADER  -1830    // 化身不能成为队长
#define ERROR_SCRIPT_CANT_KICK       -1829    // 副本内不能踢人
#define ERROR_DROAD_HP_LIMIT         -1828    // 活力值不足
#define ERROR_PLAYER_ONLINE_LIMIT    -1827    // 在线时间不足
#define ERROR_AI_BOSS_PROTECT        -1826    // Boss保护中，请先击杀Boss！
#define ERROR_SEVEN_SCRIPT_OPEN_TIME  -1825    // 七曜副本活动时间未到
#define ERROR_SCRIPT_CLEAN_TIMES     -1824    // 无可扫荡次数
#define ERROR_SCRIPT_PROGRESS        -1823    // 需要先开启前一难度
#define ERROR_SCRIPT_TOTAL_STAR_AMOUNT  -1822    // 星级不足
#define ERROR_SCRIPT_AWARD_DRAWED    -1821    // 副本奖励已领取
#define ERROR_SCRIPT_HAS_TIMES       -1820    // 本副本次数尚有剩余
#define ERROR_SCRIPT_BUY_TIMES_LIMIT  -1819    // 提升VIP获得更多挑战次数
#define ERROR_NO_NORMAL_SCENE        -1818    // 当前场景无法进入副本
#define ERROR_NO_SCRIPT_AWARD        -1817    // 没有副本奖励
#define ERROR_NO_IN_SCRIPT           -1816    // 玩家不在副本中
#define ERROR_PLAYER_IN_SCRIPT       -1815    // 玩家在副本中
#define ERROR_SCRIPT_CLEAN_STARTED   -1814    // 正在进行副本扫荡
#define ERROR_SCRIPT_CLEAN_AWARD     -1813    // 副本扫荡奖励未领取
#define ERROR_NO_SCRIPT_CLEAN        -1812    // 没有可扫荡的副本
#define ERROR_SCRIPT_STAR_LEVEL      -1811    // 该副本尚未三星通关
#define ERROR_NO_SCRIPT_CLEAN_AWARD  -1810    // 没有副本扫荡奖励
#define ERROR_SCRIPT_CLEAN_STOP      -1809    // 没有进行副本扫荡
#define ERROR_SCRIPT_SPIRIT_VALUE    -1808    // 副本阵灵值不足
#define ERROR_SCRIPT_MATRIX_LEVEL    -1807    // 达到副本阵法等级上限
#define ERROR_SCRIPT_STARTED         -1806    // 副本已启动
#define ERROR_SCRIPT_NO_STOP_TIMES   -1805    // 副本停止次数已用完
#define ERROR_SCRIPT_STOPED          -1804    // 副本已停止
#define ERROR_NOPASS_LASS_CHAPTER    -1803    // 副本的上一章节未通过
#define ERROR_SCRIPT_SCENE_NO_FINISH  -1802    // 该场景进度未完成
#define ERROR_SCRIPT_FINISH_TIMES    -1801    // 该副本暂无可挑战次数
#define ERROR_ENEMY_TIMES            -1777    // 今天传送次数已达上限
#define ERROR_MOLDING_SPIRIT_MAX_LEVEL  -1769    // 铸魂已经达到最大等级
#define ERROR_MOLDING_SPIRIT_UP_RED_EQUIP  -1768    // 请升级传说装备
#define ERROR_MOLDING_SPIRIT_FAIL    -1767    // 铸魂失败
#define ERROR_FASHION_NOT_HAS_COLOR  -1766    // 该时装没有这种染色
#define ERROR_SELECT_SAME_COLOR      -1765    // 该颜色正在被你的时装使用
#define ERROR_SELECT_SAME_FASHION    -1764    // 你已经穿上了该件时装
#define ERROR_TIME_FASHION_COLOR     -1763    // 限时时装不能染色
#define ERROR_FASHION_HAS_COLOR      -1762    // 同一时装不能重复染同种颜色
#define ERROR_FASHION_NOT_EXIT       -1761    // 你还没有该时装
#define ERROR_SMELT_MOST_LEVEL       -1760    // 熔炼等级已达最高级
#define ERROR_MOUNT_MAX_UPGRADE_CONF  -1752    // 该培养系统等阶已经超过物品可升等阶
#define ERROR_EQUIP_NO_EXIST         -1751    // 装备未达到铸造升级条件
#define ERROR_ORANGE_UPRISE_LACK_MARTIAL  -1750    // 炼晶石不足
#define ERROR_EQUIP_REFINE_LVL_LIMIT  -1749    // 强化等级不足
#define ERROR_EQUIP_CAREER_LIMIT     -1748    // 职业不同，不能穿戴该装备
#define ERROR_EQUIP_TEMPERED_LEVEL_FULL  -1747    // 已经是最高级装备
#define ERROR_EQUIP_TEMPERED_CAREER_NOT_EQUAL  -1746    // 淬炼材料职业不同
#define ERROR_INHERIT_SRC_ERROR      -1745    // 没有可继承的属性！
#define ERROR_NO_WEAPON              -1744    // 请先装备武器
#define ERROR_EQUIP_INSERT_JEWEL_HOLE  -1743    // 该镶孔未开启
#define ERROR_EQUIP_TEMPERED_COLOR_NOT_EQUAL  -1742    // 淬练材料品质不一样
#define ERROR_EQUIP_TEMPERED_LEVEL_NOT_EQUAL  -1741    // 淬练材料等级不一样
#define ERROR_EQUIP_TEMPERED_LEVEL_LOW  -1740    // 装备淬练等级不够
#define ERROR_EQUIP_POLISH_LACK_JEWEL  -1739    // 洗练石不够
#define ERROR_EQUIP_POLISH_LACK_LOCK  -1738    // 洗练锁不够
#define ERROR_EQUIP_POLISH_FULL_LUCK  -1737    // 幸运值已满，进行至尊洗练
#define ERROR_EQUIP_POLISH_LACK_LUCK  -1736    // 至尊洗练的幸运值不够
#define ERROR_EQUIP_POLISH_COLOR     -1735    // 装备洗练品质不够
#define ERROR_EQUIP_POLISH_LEVEL     -1734    // 装备洗练等级不够
#define ERROR_EQUIP_INHERIT_LOCK_ITEM  -1733    // 装备继承继承石不足
#define ERROR_EQUIP_INHERIT_PART     -1732    // 装备继承部位错误
#define ERROR_EQUIP_INHERIT_CAREER   -1731    // 装备继承职业错误
#define ERROR_EQUIP_INHERIT_COLOR    -1730    // 装备继承品质错误
#define ERROR_EQUIP_INHERIT_REFINE_LEVEL  -1729    // 装备继承等级不够
#define ERROR_EQUIP_INSERT_JEWEL_SAME_TYPE  -1727    // 该装备中已镶有同类型的宝石
#define ERROR_EQUIP_UPRISE_COLOR_LOW  -1726    // 该装备升级品质不够
#define ERROR_EQUIP_NO_BRIGHTEN      -1725    // 铸光后方可进行神炼
#define ERROR_NO_THIS_ITEM           -1724    // 物品不存在
#define ERROR_EQUIP_SEX_LIMIT        -1723    // 性别不同，不能穿戴该装备
#define ERROR_EQUIP_LEVEL_LIMIT      -1722    // 你等级不足，不能穿戴该装备
#define ERROR_EQUIPMENT_NO_BRIGHTEN  -1721    // 该装备无须铸光
#define ERROR_EQUIP_UPRISING_AIM_USE_LEVEL_HIGH  -1720    // 升阶后的装备等级过高，不能升阶
#define ERROR_UPGRADE_NO_NEED_BATCH  -1719    // 用批量升级太浪费啦，帮你省钱
#define ERROR_NO_MAGICAL_POLISH_RESULT  -1718    // 请先进行神兵洗练
#define ERROR_FASHION_EXPIRE_TIME    -1717    // 过期时装不能保存形象
#define ERROR_ALREADY_OBTAIN_PERMANT_FASHION  -1716    // 你已拥有该永久时装
#define ERROR_FASHION_CANNOT_CONVERT  -1715    // 该时装不能转化为永久时装
#define ERROR_SPECIAL_POLISH_READY   -1714    // 幸运值已满，请使用黄金聚灵
#define ERROR_SPECIAL_POLISH_LACK_LUCKY_VALUE  -1713    // 幸运值不足，不能进行黄金聚灵
#define ERROR_MAGICAL_ITEM_NOT_ACTIVE  -1712    // 该等级段神兵未激活
#define ERROR_MAGICAL_ITEM_ACTIVE    -1711    // 该等级段神兵已激活
#define ERROR_SEVEN_SHINE_MAX_LEVEL  -1710    // 该七曜部位已达最大等级
#define ERROR_EQUIP_PART_UNWEARING   -1709    // 该部位还没有装备，请装备后再尝试！！
#define ERROR_EQUIP_MARTIAL_ITEM     -1708    // 材料不正确
#define ERROR_EQUIP_BRIGHTEN_LEVEL_HIGH  -1707    // 该装备已达到最大铸光等级
#define ERROR_EQUIP_BRIGHTEN_LEVEL_LOW  -1706    // 该装备等级过低，不能铸光
#define ERROR_CANNOT_PUT_ON_EQUIP_ITEM  -1705    // 不能穿上该装备
#define ERROR_EQUIP_UPRISE_LACK_MARTIAL  -1704    // 装备升阶材料不足
#define ERROR_EQUIP_UPRISE_LEVEL_HIGH  -1703    // 该装备已达到最大升阶等级
#define ERROR_EQUIP_UPRISE_LEVEL_LOW  -1702    // 该装备等级过低，不能升阶
#define ERROR_MAX_REFINE_LEVEL       -1701    // 已达最大强化等级，提升传说阶级可继续强化
#define ERROR_UNVALID_STRENGTH_FRIEND  -1629    // 当前无可赠送体力的好友
#define ERROR_LIMIT_GET_STRENGTH     -1628    // 该好友今日已无可领取体力的次数
#define ERROR_LIMIT_GIVE_STRENGTH    -1627    // 今日已无赠送体力的次数
#define ERROR_TASK_UNFINISHED_EXP    -1626    // 已接任务未完成
#define ERROR_TASK_UNSUBMIT_EXP      -1625    // 奖励未领取
#define ERROR_MAX_NEARBY_LIMIT       -1624    // 附近的人数量已达上限
#define ERROR_MAX_ENEMY_LIMIT        -1623    // 仇人已经达到数量上限
#define ERROR_TASK_FINISH_TIMES_LIMIT  -1622    // 任务完成次数限制
#define ERROR_RECOMMEND_FRIEND_HITH_WATER_FLOW  -1621    // 暂无好友推送
#define ERROR_BLACK_LIST_SIZE_LIMIT  -1620    // 黑名单已达数量上限
#define ERROR_CLOSE_FRIEND_NUM_LIMIT  -1619    // 好友列表已满，添加失败
#define ERROR_TASK_HAS_ACCEPTED      -1618    // 任务已接
#define ERROR_TASK_TOP_STAR          -1617    // 任务已满星级
#define ERROR_NO_TASK_CAN_FINISH     -1616    // 当前没有可完成的试炼
#define ERROR_TASK_NO_ACCEPT         -1615    // 任务未接
#define ERROR_ROUTINE_WISH_TO_MAIL   -1614    // 背包已满，奖励已发送至邮箱
#define ERROR_TASK_ROUTINE_NO_FINISH  -1613    // 日常任务未完成
#define ERROR_ROUTINE_FINISH_ALL     -1612    // 日常任务已全部完成
#define ERROR_NAME_TOO_LONG          -1611    // 玩家名字太长
#define ERROR_TASK_PRE_COND          -1610    // 前置任务未完成
#define ERROR_TASK_ACCEPT_TIMES      -1609    // 任务可接次数限制
#define ERROR_TASK_ABANDON           -1608    // 任务不可放弃
#define ERROR_TASK_NPC_DISTANCE      -1607    // 距离npc太远
#define ERROR_TASK_NPC_ID            -1606    // npc ID错误
#define ERROR_TASK_STATUS            -1605    // 任务状态错误
#define ERROR_TASK_ID                -1604    // 任务不存在
#define ERROR_FRIEND_NOT_ON_LIST     -1603    // 该玩家不在好友列表中
#define ERROR_FRIEND_ON_BLACK        -1602    // 该玩家在黑名单中,不能成为好友
#define ERROR_FRIEND_ON_LIST         -1601    // 玩家已在好友列表
#define ERROR_SEND_MAIL_LEVEL_LIMIT  -1509    // 等级不足30，无法发送邮件！
#define ERROR_MAIL_COOL_TIME         -1508    // 当前已发邮件太多，请稍后再发
#define ERROR_MAIL_ATTACH_SIZE       -1507    // 附件格子不足
#define ERROR_SEND_MAIL_TO_SELF      -1506    // 不能给自己发送邮件
#define ERROR_MAIL_LOCKED            -1505    // 邮件已锁定
#define ERROR_MAIL_FORMAT            -1504    // 邮件格式错误
#define ERROR_DELETE_LOCKED          -1503    // 不能删除已锁定的邮件
#define ERROR_MAIL_GOODS_INDEX       -1502    // 附件索引错误
#define ERROR_MAIL_ID                -1501    // 邮件id错误
#define ERROR_PICKUP_SAME_LEAGUE     -1498    // 不能捡起自己帮派
#define ERROR_EQUIP_ALREADY_GOD      -1497    // 该装备已神炼
#define ERROR_LESCORT_NORIGHT        -1496    // 帮主与副帮主才可开启运镖
#define ERROR_LESCORT_NOTIMES        -1495    // 次数使用完
#define ERROR_HAVE_LEAGUE_ESCORT     -1494    // 已有镖车在护送中
#define ERROR_NEED_LEVLE_39          -1493    // 34级才可参与
#define ERROR_GOODS_SELLOUT          -1491    // 物品已出售
#define ERROR_SET_ITEM_AMOUNT        -1490    // 物品数量不合法
#define ERROR_SET_MONEY              -1489    // 金钱设置不合法
#define ERROR_ACTIVE_WILL_OPEN       -1487    // 活动即将开启，请稍后加入
#define ERROR_LEAGUE_INTRO_LENGTH    -1486    // 帮派宗旨最长44个汉字
#define ERROR_LEAGUE_NAME_LENGTH     -1485    // 帮派最长7个汉字
#define ERROR_DIVINEGON_COOL_END     -1484    // 冷却时间结束
#define ERROR_DIVINEGON_TIME         -1483    // 冷却时间未到
#define ERROR_NO_LEAGUE_RIGHT        -1482    // 没有相应的权限
#define ERROR_GUARD_TIME             -1481    // 活动尚未开始
#define ERROR_IN_LEAGUE_GUARD        -1480    // 已返回帮派
#define ERROR_LEAGUE_MAX_GOLD_DONATE  -1479    // 本日元宝捐献已达上限
#define ERROR_LEAGUE_MAX_WAND_DONATE  -1478    // 本日帮会令牌捐献已达上限
#define ERROR_LEAGUE_MAX_BUY         -1477    // 购买已达到最多
#define ERROR_LEAGUE_ADD_SPAN        -1476    // 距上一次退出帮派时间过短
#define ERROR_LPOS_MAX_COUNT         -1475    // 该职位人数已达上限
#define ERROR_LEAGUE_MAX_DONATE      -1474    // 本日捐献已达上限
#define ERROR_ALREADY_IN_SCENE       -1470    // 已进入活动场景
#define ERROR_ARENA_LAST_CHALLENGE   -1468    // 化身正在为你战斗
#define ERROR_ARENA_COOL_TIME        -1467    // 冷却时间未到
#define ERROR_ARENA_MAX_BUY_TIMES    -1466    // 今日购买已达上限
#define ERROR_LEAGUE_QUIT_SCENE      -1458    // 此场景不能退出帮派
#define ERROR_LEAGUE_LEVEL           -1451    // 帮派等级不足
#define ERROR_BONFIRE_TIME           -1446    // 活动尚未开始
#define ERROR_LEAGUE_APPLY_CANCEL    -1445    // 对方取消申请
#define ERROR_LEAGUE_MEMBER_FULL     -1444    // 帮派人数已满
#define ERROR_LEAGUE_NAME_SAME       -1443    // 此名已被使用
#define ERROR_HAVE_LEAGUE            -1442    // 已有帮派
#define ERROR_LEAGUE_NO_EXIST        -1441    // 你尚未加入帮派
#define ERROR_ARENA_IS_FIGHTING      -1428    // 该位置别人正在挑战
#define ERROR_NO_SCRIPT_TEAM         -1427    // 队长没有发起该多人副本挑战
#define ERROR_TEAM_INVITED           -1426    // 已经邀请过了
#define ERROR_CANT_JOIN_IN_FB        -1425    // 此队伍处于副本中无法加入
#define ERROR_FB_NOT_ALL_READY       -1424    // 有玩家还没准备
#define ERROR_DISMISS_TEAM_IN_FB     -1423    // 副本内不能解散队伍
#define ERROR_CHANGE_SAME_FB         -1422    // 不能切换同一个副本
#define ERROR_TEAM_HAS_REPLACEMENT   -1421    // 该玩家化身已在队伍中
#define ERROR_TEAM_APPLIED           -1420    // 已申请过了
#define ERROR_TEAM_LEADER_OFFLINE    -1419    // 队长不在线
#define ERROR_TEAM_NO_EXIST          -1418    // 队伍不存在
#define ERROR_HAVE_TEAM              -1417    // 玩家已有队伍
#define ERROR_SCENE_CREATE_TEAM      -1416    // 此场景不能创建队伍
#define ERROR_NO_TEAM                -1415    // 没有组队
#define ERROR_NO_LEADER              -1414    // 你不是队长
#define ERROR_SELF_HAVE_TEAM         -1413    // 自己已有队伍
#define ERROR_TEAM_LEADER_ALLOW      -1412    // 队长不允许
#define ERROR_TEAM_FULL              -1411    // 队伍已满
#define ERROR_ARENA_FIGHT_TIMES      -1410    // 今日挑战次数用完
#define ERROR_ITEM_ONSELL            -1409    // 此物品不可出售
#define ERROR_ALREADY_PICKUP         -1406    // 已被人拾取
#define ERROR_MAX_ONSELL             -1405    // 上架数目达到上限
#define ERROR_TRVL_SCRIPT_START      -1404    // 跨服副本已开始
#define ERROR_INNER_PLAYER_BUY       -1403    // 您被限制交易
#define ERROR_TODAY_BUY_TIMES        -1402    // 今天购买次数用完
#define ERROR_BUY_SELF_GOODS         -1401    // 不能购买自己的物品
#define ERROR_OFFLINE_HOOK_MAX       -1346    // 离线挂机时间超过上限
#define ERROR_IN_TRAVEL_SCENE        -1345    // 跨服场景内不能进行此操作
#define ERROR_WEDDING_CAN_NOT_RESEX  -1344    // 结婚后不能变性
#define ERROR_CHANGE_ROLE_SEX_LIMIT  -1343    // 变性后24小时内不能再次变性
#define ERROR_CHANGE_ROLE_NAME_LIMIT  -1342    // 改名后72小时内不能再次改名
#define ERROR_SHORT_HONOUR           -1341    // 荣誉不足
#define ERROR_LIMIT_PROP_TIMES       -1340    // 已达到今日可使用次数上限
#define ERROR_EQUIP_NOT_EXIST        -1339    // 装备不存在
#define ERROR_APPLY_NOT_VALID        -1338    // 该请求已失效
#define ERROR_SHORT_BOX_STORE        -1337    // 临时仓库空间不足
#define ERROR_TIMES_SHORT            -1333    // 次数不足
#define ERROR_PLAYER_NOT_EXIST       -1332    // 该玩家已退出帮派
#define ERROR_NO_ENOUGH_SPACE        -1331    // 空间不足
#define ERROR_LUCKY_FULL             -1327    // 幸运值已满
#define ERROR_NO_NEED_USE            -1326    // 无需使用
#define ERROR_ITEM_CANT_DROP         -1325    // 道具不能丢弃
#define ERROR_PACK_EXPLOIT_AMOUNT    -1324    // 功勋值不足
#define ERROR_PACK_SCORE_AMOUNT      -1323    // 活动积分不足
#define ERROR_GOODS_NO_EXIST         -1322    // 物品不存在
#define ERROR_ITEM_FORBID_TO_SELL    -1320    // 该物品不可出售
#define ERROR_GOODS_DIRECT_USE       -1318    // 该物品不能直接使用
#define ERROR_PACKAGE_GOODS_BIND     -1317    // 物品已绑定
#define ERROR_PACKAGE_GOODS_AMOUNT   -1316    // 物品数量不足
#define ERROR_PACK_BIND_COPPER_AMOUNT  -1315    // 铜钱（绑定）不足
#define ERROR_PACK_BIND_GOLD_AMOUNT  -1314    // 礼金不足
#define ERROR_PACKAGE_LOCKED         -1312    // 背包已锁定
#define ERROR_PACKAGE_INDEX          -1310    // 背包索引有误
#define ERROR_PACKAGE_TYPE           -1309    // 背包类型有误
#define ERROR_PACKAGE_MONEY_AMOUNT   -1308    // 金钱不足
#define ERROR_SERIAL_TOO_MORE        -1307    // 流水过多
#define ERROR_PACKAGE_COPPER_AMOUNT  -1306    // 铜钱不足
#define ERROR_PACKAGE_BINDGOLD_AMOUNT  -1305    // 礼金不足
#define ERROR_PACKAGE_GOLD_AMOUNT    -1304    // 元宝不足
#define ERROR_PACKAGE_ITEM_AMOUNT    -1303    // 物品数量不足
#define ERROR_PACKAGE_NO_CAPACITY    -1302    // 背包空间不足
#define ERROR_PACKAGE_NOT_EXISTS     -1301    // 背包不存在
#define ERROR_EXP_NO_ENOUGH          -1248    // 经验不足
#define ERROR_TARENA_FIGHTING        -1247    // 您的上场战斗未结束
#define ERROR_MOUNT_GOODS_FULL       -1246    // 物品装配已满
#define ERROR_ANGRY_FULL             -1245    // 怒气值未满
#define ERROR_SELF_LEVEL_LIMIT       -1244    // 您的等级不足
#define ERROR_KILLING_VALUE_ZERO     -1243    // 杀戮值已清零
#define ERROR_COLLECTION_NOT_EXIT    -1242    // 目标不存在
#define ERROR_SACREDSTONE_MAX_AMOUNT  -1241    // 你可打开的宝箱数量不足，无法继续开启！
#define ERROR_TARGET_CANT_DART       -1239    // 目标禁止被突进
#define ERROR_SELF_STIFF             -1237    // 处于僵直状态
#define ERROR_PK_STATE_LOCKED        -1236    // PK状态已锁定
#define ERROR_NO_PEACE_SCENE         -1234    // 该场景不可切换至和平状态
#define ERROR_SKILL_FIGHT_USE_TIMES  -1231    // 技能使用次数限购
#define ERROR_RELIVE_PROTECT         -1230    // 刚复活的玩家不可被攻击
#define ERROR_USE_SKILL_JUMPING      -1229    // 当前处于跳跃中
#define ERROR_PLAYER_PEASANT         -1227    // 玩家处于禁魔领域
#define ERROR_MUTUAL_SKILL           -1225    // 互斥技能使用中
#define ERROR_IN_SAFE_AREA           -1224    // 安全区内禁止PK
#define ERROR_RELIVE_AMOUNT          -1223    // 复活次数限制
#define ERROR_AI_BACK                -1222    // AI返回
#define ERROR_BEING_FIGHT            -1221    // 玩家处于战斗中
#define ERROR_SKILL_STEP             -1220    // 技能步骤出错
#define ERROR_TARGET_SUPPERMAN       -1219    // 目标处于无敌状态
#define ERROR_PLAYER_DIZZY           -1218    // 你已被眩晕
#define ERROR_PLAYER_SILENCE         -1217    // 你已被沉默
#define ERROR_SKILL_EXISTS           -1216    // 技能已存在
#define ERROR_NO_RELIVE_POINT        -1215    // 复活点不存在
#define ERROR_RELIVE_TIME            -1214    // 复活点复活的等待时间未到
#define ERROR_TARGET_TOO_MORE        -1213    // 目标太多
#define ERROR_TARGET_EXTEND_RANGE    -1212    // 目标距离太远
#define ERROR_SKILL_DISTANCE_LIMIT   -1211    // 技能施放距离太远
#define ERROR_SKILL_COOL_LIMIT       -1210    // 技能冷却中
#define ERROR_PLAYER_MAGIC_LIMIT     -1209    // 玩家能量不足
#define ERROR_PLAYER_LEVEL_LIMIT     -1208    // 玩家等级限制
#define ERROR_SKILL_NOT_EXISTS       -1207    // 技能不存在
#define ERROR_SKILL_CAREER_LIMIT     -1206    // 技能职业限制
#define ERROR_NO_ATTACK_TARGET       -1205    // 没有可攻击目标
#define ERROR_TARGET_NOT_FOUND       -1204    // 找不到攻击目标
#define ERROR_TARGET_NO_ATTACK       -1203    // 目标不可攻击
#define ERROR_TARGET_DEATH           -1202    // 目标已死亡
#define ERROR_PLAYER_DEATH           -1201    // 角色已死亡
#define ERROR_MOVE_STAY              -1106    // 你已被定身
#define ERROR_SCENE_NO_ADJACENT      -1105    // 目标场景不相邻
#define ERROR_SCENE_NO_EXISTS        -1104    // 场景不存在
#define ERROR_COORD_ILLEGAL          -1102    // 移动坐标不可走
#define ERROR_COORD_OFFSET           -1101    // 目标位置相隔太远
#define ERROR_PASS_OPEN_SERVER_DAY   -1050    // 开服过久,请到新服体验游戏
#define ERROR_TRVL_SAME_VERSION      -1049    // 跨服版本不匹配
#define ERROR_BACK_GAME_SWITCH_CLOSE  -1048    // 该系统暂未开启
#define ERROR_HAVE_SAME_LABEL        -1047    // 已拥有该称号
#define ERROR_LIMIT_TIMES            -1046    // 无可用次数
#define ERROR_SPECIAL_LABEL          -1042    // 特殊称号
#define ERROR_SAVVY_LIMIT            -1040    // 悟性值不足
#define ERROR_VIP_LEVEL              -1039    // VIP等级不足
#define ERROR_LABEL_SELECT_LIMITED   -1037    // 特殊称号无法卸下
#define ERROR_SCENE_TRANSFER_LIMITED  -1036    // 场景传送限制
#define ERROR_SEX_ERROR              -1035    // 性别不匹配
#define ERROR_SCENE_NOT_OPEN         -1034    // 场景未开启
#define ERROR_MODEL_CLOSED           -1032    // 暂不可用
#define ERROR_NOT_ALLOW_LOGIN        -1031    // 账号禁用
#define ERROR_NO_OPEN_LOGIN          -1030    // 服务器未开放登录
#define ERROR_NOT_VIP                -1029    // 还没成为VIP
#define ERROR_ACTIVITY_ENDED         -1027    // 活动已结束
#define ERROR_ACCOUNT_EXISTS         -1026    // 账号已存在
#define ERROR_BLOOD_CONTAINER_FULL   -1025    // 血池容量已达上限
#define ERROR_NOT_JOIN_TIME          -1024    // 活动尚未开始
#define ERROR_NORMAL_SCENE           -1023    // 请先退出当前地图
#define ERROR_USE_SCENE_LIMIT        -1022    // 此场景不能使用
#define ERROR_OTHER_USING            -1021    // 其他玩家正在使用
#define ERROR_ARRIVE_MAX_LEVEL       -1020    // 超过了最高等级
#define ERROR_INDEX_INVALID          -1019    // 索引非法
#define ERROR_INDEX_OUT_RANGE        -1018    // 索引越界
#define ERROR_INDEX_REPEATED         -1017    // 索引重复
#define ERROR_CONFIG_ERROR           -1016    // 配置错误
#define ERROR_INVALID_PARAM          -1015    // 消息参数非法
#define ERROR_PLAYER_LEVEL           -1014    // 角色等级不足
#define ERROR_OPERATE_TIME_OUT       -1013    // 操作超时
#define ERROR_NAME_LENGTH            -1012    // 长度不符合
#define ERROR_OPERATE_TOO_FAST       -1011    // 操作频率过高
#define ERROR_PLAYER_OFFLINE         -1010    // 玩家不在线
#define ERROR_ROLE_NOT_EXISTS        -1009    // 角色不存在
#define ERROR_SESSION_TIMEOUT        -1008    // 会话验证超5分钟，请重新登入
#define ERROR_ROLE_IS_LOGIN          -1007    // 已有角色登录, 请刷新
#define ERROR_ROLE_EXISTS            -1006    // 角色已存在
#define ERROR_ROLE_TOO_MORE          -1005    // 角色太多
#define ERROR_SESSION_ILLEGAL        -1004    // 会话验证非法
#define ERROR_CONFIG_NOT_EXIST       -1003    // 配置不存在
#define ERROR_SERVER_INNER           -1002    // 服务器内部错误
#define ERROR_CLIENT_OPERATE         -1001    // 非法操作


#endif /* _GAMEERROR_H_ */