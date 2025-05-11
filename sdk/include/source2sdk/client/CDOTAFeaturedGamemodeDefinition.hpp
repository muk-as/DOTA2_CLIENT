#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_GameMode.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFeaturedGamemodeDefinition
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            // metadata: MPropertyDescription "unique integer ID of this weekly featured game mode"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_featured_gamemode_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            std::uint16_t m_nID; // 0x18            
            uint8_t _pad001a[0x2]; // 0x1a
            // metadata: MPropertyDescription "Game Mode; use DOTA_GAMEMODE_EVENT for custom games and include custom game name"
            source2sdk::client::DOTA_GameMode m_eGameMode; // 0x1c            
            // metadata: MPropertyDescription "custom game addon name if any; references event_games.txt"
            CUtlString m_sCustomGame; // 0x20            
            // metadata: MPropertyDescription "shards per win"
            std::int32_t m_nShardsPerWin; // 0x28            
            // metadata: MPropertyDescription "shards per loss"
            std::int32_t m_nShardsPerLoss; // 0x2c            
            // metadata: MPropertyDescription "the date/time this mode starts (YYYY-MM-DD hh:mm:ss) UTC"
            CUtlString m_sStartTime; // 0x30            
            uint8_t _pad0038[0x8]; // 0x38
            // metadata: MPropertyDescription "the date/time this mode ends (YYYY-MM-DD hh:mm:ss) UTC"
            CUtlString m_sEndTime; // 0x40            
            uint8_t _pad0048[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_nID) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_eGameMode) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_sCustomGame) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_nShardsPerWin) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_nShardsPerLoss) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_sStartTime) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_sEndTime) == 0x40);
        
        static_assert(sizeof(source2sdk::client::CDOTAFeaturedGamemodeDefinition) == 0x50);
    };
};
