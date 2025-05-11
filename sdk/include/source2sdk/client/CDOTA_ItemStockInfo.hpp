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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x58
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
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            std::int32_t iTeamNumber; // 0x30            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t nItemAbilityID; // 0x34            
            // metadata: MNetworkEnable
            float fStockDuration; // 0x38            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t fStockTime; // 0x3c            
            // metadata: MNetworkEnable
            std::int32_t iStockCount; // 0x40            
            // metadata: MNetworkEnable
            std::int32_t iMaxCount; // 0x44            
            // metadata: MNetworkEnable
            float fInitialStockDuration; // 0x48            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t iPlayerID; // 0x4c            
            // metadata: MNetworkEnable
            std::int32_t iBonusDelayedStockCount; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iTeamNumber) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, nItemAbilityID) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, fStockDuration) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, fStockTime) == 0x3c);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iStockCount) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iMaxCount) == 0x44);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, fInitialStockDuration) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iPlayerID) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDOTA_ItemStockInfo, iBonusDelayedStockCount) == 0x50);
        
        static_assert(sizeof(source2sdk::client::CDOTA_ItemStockInfo) == 0x58);
    };
};
