#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/ChoiceBlendMethod.hpp"
#include "source2sdk/animgraphlib/ChoiceChangeMethod.hpp"
#include "source2sdk/animgraphlib/ChoiceMethod.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CChoiceUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x18]; // 0x58            
            // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_weights;
            char m_weights[0x18]; // 0x70            
            // m_blendTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_blendTimes;
            char m_blendTimes[0x18]; // 0x88            
            source2sdk::animgraphlib::ChoiceMethod m_choiceMethod; // 0xa0            
            source2sdk::animgraphlib::ChoiceChangeMethod m_choiceChangeMethod; // 0xa4            
            source2sdk::animgraphlib::ChoiceBlendMethod m_blendMethod; // 0xa8            
            float m_blendTime; // 0xac            
            bool m_bCrossFade; // 0xb0            
            bool m_bResetChosen; // 0xb1            
            bool m_bDontResetSameSelection; // 0xb2            
            uint8_t _pad00b3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChoiceUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CChoiceUpdateNode) == 0xb8);
    };
};
