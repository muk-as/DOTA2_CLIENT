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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSeqSynthAnimDesc
        {
        public:
            CBufferString m_sName; // 0x_            
            source2sdk::animationsystem::CSeqSeqDescFlag m_flags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animationsystem::CSeqTransition m_transition; // 0x_            
            std::int16_t m_nLocalBaseReference; // 0x_            
            std::int16_t m_nLocalBoneMask; // 0x_            
            // m_activityArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimActivity> m_activityArray;
            char m_activityArray[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_flags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_transition) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_nLocalBaseReference) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_nLocalBoneMask) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSynthAnimDesc, m_activityArray) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqSynthAnimDesc) == 0x_);
    };
};
