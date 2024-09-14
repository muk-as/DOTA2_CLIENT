#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x58
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPhysSurfacePropertiesSoundNames
    {
    public:
        // metadata: MKV3TransferName "impactsoft"
        CUtlString m_impactSoft; // 0x0        
        // metadata: MKV3TransferName "impacthard"
        CUtlString m_impactHard; // 0x8        
        // metadata: MKV3TransferName "scrapesmooth"
        CUtlString m_scrapeSmooth; // 0x10        
        // metadata: MKV3TransferName "scraperough"
        CUtlString m_scrapeRough; // 0x18        
        // metadata: MKV3TransferName "bulletimpact"
        CUtlString m_bulletImpact; // 0x20        
        // metadata: MKV3TransferName "rolling"
        CUtlString m_rolling; // 0x28        
        // metadata: MKV3TransferName "break"
        CUtlString m_break; // 0x30        
        // metadata: MKV3TransferName "strain"
        CUtlString m_strain; // 0x38        
        // metadata: MKV3TransferName "meleeimpact"
        CUtlString m_meleeImpact; // 0x40        
        // metadata: MKV3TransferName "pushoff"
        CUtlString m_pushOff; // 0x48        
        // metadata: MKV3TransferName "skidstop"
        CUtlString m_skidStop; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_impactSoft) == 0x0);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_impactHard) == 0x8);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_scrapeSmooth) == 0x10);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_scrapeRough) == 0x18);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_bulletImpact) == 0x20);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_rolling) == 0x28);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_break) == 0x30);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_strain) == 0x38);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_meleeImpact) == 0x40);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_pushOff) == 0x48);
    static_assert(offsetof(CPhysSurfacePropertiesSoundNames, m_skidStop) == 0x50);
    
    static_assert(sizeof(CPhysSurfacePropertiesSoundNames) == 0x58);
};
