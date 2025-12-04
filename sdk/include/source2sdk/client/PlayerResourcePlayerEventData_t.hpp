#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerResourcePlayerPeriodicResourceData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_iEventID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iEventLevel; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iEventPoints; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iEventPremiumPoints; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iEventEffectsMask; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsEventOwned; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_iFavoriteTeam; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_iFavoriteTeamQuality; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iAvailableSalutes; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iSaluteAmountIndex; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iEventWagerStreak; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iEventTeleportFXLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nCandyPointsReason[5]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecPeriodicResources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerPeriodicResourceData_t> m_vecPeriodicResources;
            char m_vecPeriodicResources[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iSaluteAmounts"
            std::uint8_t m_iObsoleteSaluteAmounts; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventArcanaPeriodicResourceRemaining"
            std::uint32_t m_iObsoleteEventArcanaPeriodicResourceRemaining; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventArcanaPeriodicResourceMax"
            std::uint32_t m_iObsoleteEventArcanaPeriodicResourceMax; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventWagerTokensRemaining"
            std::uint32_t m_iObsoleteEventWagerTokensRemaining; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventWagerTokensMax"
            std::uint32_t m_iObsoleteEventWagerTokensMax; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventBountiesRemaining"
            std::uint32_t m_iObsoleteEventBountiesRemaining; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iRankWagersAvailable"
            std::uint32_t m_iObsoleteRankWagersAvailable; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iRankWagersMax"
            std::uint32_t m_iObsoleteRankWagersMax; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventPointAdjustmentsRemaining"
            std::uint32_t m_iObsoleteEventPointAdjustmentsRemaining; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventRanks"
            std::uint16_t m_iObsoleteEventRanks; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventID) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventPoints) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventPremiumPoints) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventEffectsMask) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_bIsEventOwned) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iFavoriteTeam) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iFavoriteTeamQuality) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iAvailableSalutes) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iSaluteAmountIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventWagerStreak) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventTeleportFXLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_nCandyPointsReason) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_vecPeriodicResources) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteSaluteAmounts) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventArcanaPeriodicResourceRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventArcanaPeriodicResourceMax) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventWagerTokensRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventWagerTokensMax) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventBountiesRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteRankWagersAvailable) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteRankWagersMax) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventPointAdjustmentsRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventRanks) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PlayerResourcePlayerEventData_t) == 0x_);
    };
};
