#pragma once
#include "source2sdk/client/C_FuncBrush.hpp"
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
    // Size: 0x918
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTAAmbientCreatureParticleZone : public client::C_FuncBrush
    {
    public:
        char m_szModelName[64]; // 0x7d8        
        char m_szAreaName[256]; // 0x818        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAAmbientCreatureParticleZone because it is not a standard-layout class
    static_assert(sizeof(C_DOTAAmbientCreatureParticleZone) == 0x918);
};
