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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBlendUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x18]; // 0x60            
            // m_sortedOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_sortedOrder;
            char m_sortedOrder[0x18]; // 0x78            
            // m_targetValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_targetValues;
            char m_targetValues[0x18]; // 0x90            
            uint8_t _pad00a8[0x4]; // 0xa8
            source2sdk::animgraphlib::AnimValueSource m_blendValueSource; // 0xac            
            source2sdk::animgraphlib::LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode; // 0xb0            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0xb4            
            uint8_t _pad00b6[0x2]; // 0xb6
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0xb8            
            source2sdk::animgraphlib::BlendKeyType m_blendKeyType; // 0xd0            
            bool m_bLockBlendOnReset; // 0xd4            
            bool m_bSyncCycles; // 0xd5            
            bool m_bLoop; // 0xd6            
            bool m_bLockWhenWaning; // 0xd7            
            bool m_bIsAngle; // 0xd8            
            uint8_t _pad00d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBlendUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBlendUpdateNode) == 0xe0);
    };
};
