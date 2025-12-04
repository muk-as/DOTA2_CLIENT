#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "int iTeamNumber"
        // static metadata: MNetworkVarNames "AbilityID_t nItemAbilityID"
        // static metadata: MNetworkVarNames "float fStockDuration"
        // static metadata: MNetworkVarNames "GameTime_t fStockTime"
        // static metadata: MNetworkVarNames "int iStockCount"
        // static metadata: MNetworkVarNames "int iMaxCount"
        // static metadata: MNetworkVarNames "float fInitialStockDuration"
        // static metadata: MNetworkVarNames "PlayerID_t iPlayerID"
        // static metadata: MNetworkVarNames "int iBonusDelayedStockCount"
        #pragma pack(push, 1)
        class CDOTA_ItemStockInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t iTeamNumber; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t nItemAbilityID; // 0x_            
            // metadata: MNetworkEnable
            float fStockDuration; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t fStockTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t iStockCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t iMaxCount; // 0x_            
            // metadata: MNetworkEnable
            float fInitialStockDuration; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t iPlayerID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t iBonusDelayedStockCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iTeamNumber) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, nItemAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, fStockDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, fStockTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iStockCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iMaxCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, fInitialStockDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iBonusDelayedStockCount) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTA_ItemStockInfo) == 0x_);
    };
};
