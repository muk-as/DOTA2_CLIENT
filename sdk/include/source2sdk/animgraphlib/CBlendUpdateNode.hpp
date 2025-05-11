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
        // Size: 0xd8
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
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0xb0            
            uint8_t _pad00b2[0x6]; // 0xb2
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0xb8            
            source2sdk::animgraphlib::BlendKeyType m_blendKeyType; // 0xc8            
            bool m_bLockBlendOnReset; // 0xcc            
            bool m_bSyncCycles; // 0xcd            
            bool m_bLoop; // 0xce            
            bool m_bLockWhenWaning; // 0xcf            
            bool m_bIsAngle; // 0xd0            
            uint8_t _pad00d1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBlendUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBlendUpdateNode) == 0xd8);
    };
};
