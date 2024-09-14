#pragma once
#include "source2sdk/server/CSoundEventEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x578
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flRadius"
    #pragma pack(push, 1)
    class CSoundEventSphereEntity : public server::CSoundEventEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flRadius; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x574[0x4];
        
        // Datamap fields:
        // void CSoundEventSphereEntitySoundEventSphereThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundEventSphereEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundEventSphereEntity) == 0x578);
};
