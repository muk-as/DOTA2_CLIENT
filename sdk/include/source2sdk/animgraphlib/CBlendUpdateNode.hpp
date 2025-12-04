#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/BlendKeyType.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/LinearRootMotionBlendMode_t.hpp"

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
        class CBlendUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x_]; // 0x_            
            // m_sortedOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_sortedOrder;
            char m_sortedOrder[0x_]; // 0x_            
            // m_targetValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_targetValues;
            char m_targetValues[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::AnimValueSource m_blendValueSource; // 0x_            
            source2sdk::animgraphlib::LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            source2sdk::animgraphlib::BlendKeyType m_blendKeyType; // 0x_            
            bool m_bLockBlendOnReset; // 0x_            
            bool m_bSyncCycles; // 0x_            
            bool m_bLoop; // 0x_            
            bool m_bLockWhenWaning; // 0x_            
            bool m_bIsAngle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBlendUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBlendUpdateNode) == 0x_);
    };
};
