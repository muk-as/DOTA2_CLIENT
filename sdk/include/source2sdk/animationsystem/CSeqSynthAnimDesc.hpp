#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimActivity.hpp"
#include "source2sdk/animationsystem/CSeqSeqDescFlag.hpp"
#include "source2sdk/animationsystem/CSeqTransition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSeqSynthAnimDesc
        {
        public:
            CBufferString m_sName; // 0x0            
            source2sdk::animationsystem::CSeqSeqDescFlag m_flags; // 0x10            
            uint8_t _pad001b[0x1]; // 0x1b
            source2sdk::animationsystem::CSeqTransition m_transition; // 0x1c            
            std::int16_t m_nLocalBaseReference; // 0x24            
            std::int16_t m_nLocalBoneMask; // 0x26            
            // m_activityArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimActivity> m_activityArray;
            char m_activityArray[0x18]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_flags) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_transition) == 0x1c);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_nLocalBaseReference) == 0x24);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_nLocalBoneMask) == 0x26);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_activityArray) == 0x28);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqSynthAnimDesc) == 0x40);
    };
};
