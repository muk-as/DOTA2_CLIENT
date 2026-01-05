#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "FowCustomTeams_t m_nFoWTeam"
        #pragma pack(push, 1)
        class CDOTA_NPC_Observer_Ward : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            std::int32_t m_iDuration; // 0x_            
            bool m_bPlacedInSpawnBox; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NPC_Observer_Ward) == 0x_);
    };
};
