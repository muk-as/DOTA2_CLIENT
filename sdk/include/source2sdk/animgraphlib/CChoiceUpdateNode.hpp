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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CChoiceUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x_]; // 0x_            
            // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_weights;
            char m_weights[0x_]; // 0x_            
            // m_blendTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_blendTimes;
            char m_blendTimes[0x_]; // 0x_            
            source2sdk::animgraphlib::ChoiceMethod m_choiceMethod; // 0x_            
            source2sdk::animgraphlib::ChoiceChangeMethod m_choiceChangeMethod; // 0x_            
            source2sdk::animgraphlib::ChoiceBlendMethod m_blendMethod; // 0x_            
            float m_blendTime; // 0x_            
            bool m_bCrossFade; // 0x_            
            bool m_bResetChosen; // 0x_            
            bool m_bDontResetSameSelection; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChoiceUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CChoiceUpdateNode) == 0x_);
    };
};
