#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1760
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkSeer_WallOfReplica : public client::CDOTA_Buff
    {
    public:
        Vector m_vWallDirection; // 0x16e8        
        Vector m_vWallRight; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x1700[0x18]; // 0x1700
        // m_PreventReplicateTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<int32_t,entity2::GameTime_t> m_PreventReplicateTime;
        char m_PreventReplicateTime[0x28]; // 0x1718        
        int32_t width; // 0x1740        
        int32_t wall_damage; // 0x1744        
        float slow_duration; // 0x1748        
        int32_t replica_damage_incoming; // 0x174c        
        int32_t replica_damage_outgoing; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_WallOfReplica because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkSeer_WallOfReplica) == 0x1760);
};
