#pragma once
#include "source2sdk/client/C_SoundEventEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flRadius"
    #pragma pack(push, 1)
    class C_SoundEventSphereEntity : public client::C_SoundEventEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flRadius; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventSphereEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventSphereEntity) == 0x600);
};
