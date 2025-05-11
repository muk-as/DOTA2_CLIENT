#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1870
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkSeer_WallOfReplica : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallDirection; // 0x17f8            
            Vector m_vWallRight; // 0x1804            
            uint8_t _pad1810[0x18]; // 0x1810
            // m_PreventReplicateTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<std::int32_t,source2sdk::entity2::GameTime_t> m_PreventReplicateTime;
            char m_PreventReplicateTime[0x28]; // 0x1828            
            float width; // 0x1850            
            std::int32_t wall_damage; // 0x1854            
            float slow_duration; // 0x1858            
            std::int32_t replica_damage_incoming; // 0x185c            
            std::int32_t replica_damage_outgoing; // 0x1860            
            uint8_t _pad1864[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_WallOfReplica because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkSeer_WallOfReplica) == 0x1870);
    };
};
