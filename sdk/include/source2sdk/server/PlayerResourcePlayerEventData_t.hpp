#pragma once
#include "source2sdk/server/PlayerResourcePlayerPeriodicResourceData_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xe8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "uint32 m_iEventID"
    // static metadata: MNetworkVarNames "uint32 m_iEventLevel"
    // static metadata: MNetworkVarNames "uint32 m_iEventPoints"
    // static metadata: MNetworkVarNames "uint32 m_iEventPremiumPoints"
    // static metadata: MNetworkVarNames "uint32 m_iEventEffectsMask"
    // static metadata: MNetworkVarNames "bool m_bIsEventOwned"
    // static metadata: MNetworkVarNames "TeamID_t m_iFavoriteTeam"
    // static metadata: MNetworkVarNames "uint16 m_iFavoriteTeamQuality"
    // static metadata: MNetworkVarNames "uint8 m_iAvailableSalutes"
    // static metadata: MNetworkVarNames "uint8 m_iSaluteAmountIndex"
    // static metadata: MNetworkVarNames "uint32 m_iEventWagerStreak"
    // static metadata: MNetworkVarNames "uint8 m_iEventTeleportFXLevel"
    // static metadata: MNetworkVarNames "int m_nCandyPointsReason"
    // static metadata: MNetworkVarNames "PlayerResourcePlayerPeriodicResourceData_t m_vecPeriodicResources"
    // static metadata: MNetworkVarNames "uint8 m_iObsoleteSaluteAmounts"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventArcanaPeriodicResourceRemaining"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventArcanaPeriodicResourceMax"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventWagerTokensRemaining"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventWagerTokensMax"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventBountiesRemaining"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteRankWagersAvailable"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteRankWagersMax"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventPointAdjustmentsRemaining"
    // static metadata: MNetworkVarNames "uint16 m_iObsoleteEventRanks"
    #pragma pack(push, 1)
    struct PlayerResourcePlayerEventData_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        uint32_t m_iEventID; // 0x30        
        // metadata: MNetworkEnable
        uint32_t m_iEventLevel; // 0x34        
        // metadata: MNetworkEnable
        uint32_t m_iEventPoints; // 0x38        
        // metadata: MNetworkEnable
        uint32_t m_iEventPremiumPoints; // 0x3c        
        // metadata: MNetworkEnable
        uint32_t m_iEventEffectsMask; // 0x40        
        // metadata: MNetworkEnable
        bool m_bIsEventOwned; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3]; // 0x45
        // metadata: MNetworkEnable
        uint32_t m_iFavoriteTeam; // 0x48        
        // metadata: MNetworkEnable
        uint16_t m_iFavoriteTeamQuality; // 0x4c        
        // metadata: MNetworkEnable
        uint8_t m_iAvailableSalutes; // 0x4e        
        // metadata: MNetworkEnable
        uint8_t m_iSaluteAmountIndex; // 0x4f        
        // metadata: MNetworkEnable
        uint32_t m_iEventWagerStreak; // 0x50        
        // metadata: MNetworkEnable
        uint8_t m_iEventTeleportFXLevel; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0x3]; // 0x55
        // metadata: MNetworkEnable
        int32_t m_nCandyPointsReason[5]; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4]; // 0x6c
        // metadata: MNetworkEnable
        // m_vecPeriodicResources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PlayerResourcePlayerPeriodicResourceData_t> m_vecPeriodicResources;
        char m_vecPeriodicResources[0x50]; // 0x70        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iSaluteAmounts"
        uint8_t m_iObsoleteSaluteAmounts; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventArcanaPeriodicResourceRemaining"
        uint32_t m_iObsoleteEventArcanaPeriodicResourceRemaining; // 0xc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventArcanaPeriodicResourceMax"
        uint32_t m_iObsoleteEventArcanaPeriodicResourceMax; // 0xc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventWagerTokensRemaining"
        uint32_t m_iObsoleteEventWagerTokensRemaining; // 0xcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventWagerTokensMax"
        uint32_t m_iObsoleteEventWagerTokensMax; // 0xd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventBountiesRemaining"
        uint32_t m_iObsoleteEventBountiesRemaining; // 0xd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iRankWagersAvailable"
        uint32_t m_iObsoleteRankWagersAvailable; // 0xd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iRankWagersMax"
        uint32_t m_iObsoleteRankWagersMax; // 0xdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventPointAdjustmentsRemaining"
        uint32_t m_iObsoleteEventPointAdjustmentsRemaining; // 0xe0        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventRanks"
        uint16_t m_iObsoleteEventRanks; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe6[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iEventID) == 0x30);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iEventLevel) == 0x34);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iEventPoints) == 0x38);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iEventPremiumPoints) == 0x3c);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iEventEffectsMask) == 0x40);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_bIsEventOwned) == 0x44);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iFavoriteTeam) == 0x48);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iFavoriteTeamQuality) == 0x4c);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iAvailableSalutes) == 0x4e);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iSaluteAmountIndex) == 0x4f);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iEventWagerStreak) == 0x50);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iEventTeleportFXLevel) == 0x54);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_nCandyPointsReason) == 0x58);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_vecPeriodicResources) == 0x70);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteSaluteAmounts) == 0xc0);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteEventArcanaPeriodicResourceRemaining) == 0xc4);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteEventArcanaPeriodicResourceMax) == 0xc8);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteEventWagerTokensRemaining) == 0xcc);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteEventWagerTokensMax) == 0xd0);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteEventBountiesRemaining) == 0xd4);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteRankWagersAvailable) == 0xd8);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteRankWagersMax) == 0xdc);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteEventPointAdjustmentsRemaining) == 0xe0);
    static_assert(offsetof(PlayerResourcePlayerEventData_t, m_iObsoleteEventRanks) == 0xe4);
    
    static_assert(sizeof(PlayerResourcePlayerEventData_t) == 0xe8);
};
