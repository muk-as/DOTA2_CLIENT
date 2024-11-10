#pragma once
#include "source2sdk/client/C_SoundAreaEntityBase.hpp"
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
    // Size: 0x5a0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "Vector m_vMin"
    // static metadata: MNetworkVarNames "Vector m_vMax"
    #pragma pack(push, 1)
    class C_SoundAreaEntityOrientedBox : public client::C_SoundAreaEntityBase
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vMin; // 0x588        
        // metadata: MNetworkEnable
        Vector m_vMax; // 0x594        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundAreaEntityOrientedBox because it is not a standard-layout class
    static_assert(sizeof(C_SoundAreaEntityOrientedBox) == 0x5a0);
};
