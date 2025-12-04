#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkSeer_WallOfReplica : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallDirection; // 0x_            
            Vector m_vWallRight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_PreventReplicateTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<std::int32_t,source2sdk::entity2::GameTime_t> m_PreventReplicateTime;
            char m_PreventReplicateTime[0x_]; // 0x_            
            float width; // 0x_            
            std::int32_t wall_damage; // 0x_            
            float slow_duration; // 0x_            
            std::int32_t replica_damage_incoming; // 0x_            
            std::int32_t replica_damage_outgoing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_WallOfReplica because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkSeer_WallOfReplica) == 0x_);
    };
};
