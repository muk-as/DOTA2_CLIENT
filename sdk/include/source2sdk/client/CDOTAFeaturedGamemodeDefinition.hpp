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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFeaturedGamemodeDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "unique integer ID of this weekly featured game mode"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_featured_gamemode_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            std::uint16_t m_nID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Game Mode; use DOTA_GAMEMODE_EVENT for custom games and include custom game name"
            source2sdk::client::DOTA_GameMode m_eGameMode; // 0x_            
            // metadata: MPropertyDescription "custom game addon name if any; references event_games.txt"
            CUtlString m_sCustomGame; // 0x_            
            // metadata: MPropertyDescription "shards per win"
            std::int32_t m_nShardsPerWin; // 0x_            
            // metadata: MPropertyDescription "shards per loss"
            std::int32_t m_nShardsPerLoss; // 0x_            
            // metadata: MPropertyDescription "the date/time this mode starts (YYYY-MM-DD hh:mm:ss) UTC"
            CUtlString m_sStartTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "the date/time this mode ends (YYYY-MM-DD hh:mm:ss) UTC"
            CUtlString m_sEndTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_nID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_eGameMode) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_sCustomGame) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_nShardsPerWin) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_nShardsPerLoss) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_sStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFeaturedGamemodeDefinition, m_sEndTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFeaturedGamemodeDefinition) == 0x_);
    };
};
