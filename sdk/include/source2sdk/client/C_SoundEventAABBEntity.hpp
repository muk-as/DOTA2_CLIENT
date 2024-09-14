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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vMins"
    // static metadata: MNetworkVarNames "Vector m_vMaxs"
    #pragma pack(push, 1)
    class C_SoundEventAABBEntity : public client::C_SoundEventEntity
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vMins; // 0x5f8        
        // metadata: MNetworkEnable
        Vector m_vMaxs; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventAABBEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventAABBEntity) == 0x610);
};
