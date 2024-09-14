#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/CVariantDefaultAllocator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ScriptedMotionController : public client::CDOTA_Buff
    {
    public:
        HSCRIPT m_hHorizontalControlFunction; // 0x16e8        
        HSCRIPT m_hVerticalControlFunction; // 0x16f0        
        HSCRIPT m_hOnDestroyFunction; // 0x16f8        
        // m_parameterTable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CVariantBase<entity2::CVariantDefaultAllocator> m_parameterTable;
        char m_parameterTable[0x10]; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ScriptedMotionController because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ScriptedMotionController) == 0x1710);
};
