#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class Modifier_Pluck_Famango_Channel : public client::CDOTA_Buff
    {
    public:
        float famango_rate; // 0x1708        
        // m_hMangoTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hMangoTree;
        char m_hMangoTree[0x4]; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in Modifier_Pluck_Famango_Channel because it is not a standard-layout class
    static_assert(sizeof(Modifier_Pluck_Famango_Channel) == 0x1710);
};
