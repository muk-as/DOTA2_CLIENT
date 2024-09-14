#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 49
    // Alignment: 4
    // Size: 0x4
    enum class eEconItemOrigin : std::uint32_t
    {
        kEconItemOrigin_Invalid = 0xffffffff,
        kEconItemOrigin_Drop = 0x0,
        kEconItemOrigin_Achievement = 0x1,
        kEconItemOrigin_Purchased = 0x2,
        kEconItemOrigin_Traded = 0x3,
        kEconItemOrigin_Crafted = 0x4,
        kEconItemOrigin_StorePromotion = 0x5,
        kEconItemOrigin_Gifted = 0x6,
        kEconItemOrigin_SupportGranted = 0x7,
        kEconItemOrigin_FoundInCrate = 0x8,
        kEconItemOrigin_Earned = 0x9,
        kEconItemOrigin_ThirdPartyPromotion = 0xa,
        kEconItemOrigin_GiftWrapped = 0xb,
        kEconItemOrigin_HalloweenDrop = 0xc,
        kEconItemOrigin_PackageItem = 0xd,
        kEconItemOrigin_Foreign = 0xe,
        kEconItemOrigin_CDKey = 0xf,
        kEconItemOrigin_CollectionReward = 0x10,
        kEconItemOrigin_PreviewItem = 0x11,
        kEconItemOrigin_SteamWorkshopContribution = 0x12,
        kEconItemOrigin_PeriodicScoreReward = 0x13,
        kEconItemOrigin_Recycling = 0x14,
        kEconItemOrigin_TournamentDrop = 0x15,
        kEconItemOrigin_PassportReward = 0x16,
        kEconItemOrigin_TutorialDrop = 0x17,
        kEconItemOrigin_RecipeOutput = 0x18,
        kEconItemOrigin_GemExtract = 0x19,
        kEconItemOrigin_EventPointReward = 0x1a,
        kEconItemOrigin_ItemRedemption = 0x1b,
        kEconItemOrigin_FantasyTicketRefund = 0x1c,
        kEconItemOrigin_VictoryPredictionReward = 0x1d,
        kEconItemOrigin_AssassinEventReward = 0x1e,
        kEconItemOrigin_CompendiumReward = 0x1f,
        kEconItemOrigin_CompendiumDrop = 0x20,
        kEconItemOrigin_MysteryItem = 0x21,
        kEconItemOrigin_UnpackedFromBundle = 0x22,
        kEconItemOrigin_WonFromWeeklyGame = 0x23,
        kEconItemOrigin_SeasonalItemGrant = 0x24,
        kEconItemOrigin_PackOpening = 0x25,
        kEconItemOrigin_InitialGrant = 0x26,
        kEconItemOrigin_MarketPurchase = 0x27,
        kEconItemOrigin_MarketRefunded = 0x28,
        kEconItemOrigin_LimitedDraft = 0x29,
        kEconItemOrigin_GauntletReward = 0x2a,
        kEconItemOrigin_CompendiumGift = 0x2b,
        kEconItemOrigin_CandyShopPurchase = 0x2c,
        kEconItemOrigin_Transmuted = 0x2d,
        kEconItemOrigin_PruchaseWithCharges = 0x2e,
        kEconItemOrigin_Max = 0x2f,
    };
};
