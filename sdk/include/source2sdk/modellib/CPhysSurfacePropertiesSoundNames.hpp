#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPhysSurfacePropertiesSoundNames
        {
        public:
            // metadata: MKV3TransferName "impactsoft"
            CUtlString m_impactSoft; // 0x_            
            // metadata: MKV3TransferName "impacthard"
            CUtlString m_impactHard; // 0x_            
            // metadata: MKV3TransferName "scrapesmooth"
            CUtlString m_scrapeSmooth; // 0x_            
            // metadata: MKV3TransferName "scraperough"
            CUtlString m_scrapeRough; // 0x_            
            // metadata: MKV3TransferName "bulletimpact"
            CUtlString m_bulletImpact; // 0x_            
            // metadata: MKV3TransferName "rolling"
            CUtlString m_rolling; // 0x_            
            // metadata: MKV3TransferName "break"
            CUtlString m_break; // 0x_            
            // metadata: MKV3TransferName "strain"
            CUtlString m_strain; // 0x_            
            // metadata: MKV3TransferName "meleeimpact"
            CUtlString m_meleeImpact; // 0x_            
            // metadata: MKV3TransferName "pushoff"
            CUtlString m_pushOff; // 0x_            
            // metadata: MKV3TransferName "skidstop"
            CUtlString m_skidStop; // 0x_            
            // metadata: MKV3TransferName "resonant"
            CUtlString m_resonant; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_impactSoft) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_impactHard) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_scrapeSmooth) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_scrapeRough) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_bulletImpact) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_rolling) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_break) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_strain) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_meleeImpact) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_pushOff) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_skidStop) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames, m_resonant) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CPhysSurfacePropertiesSoundNames) == 0x_);
    };
};
