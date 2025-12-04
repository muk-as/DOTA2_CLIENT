#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        struct AnimationDecodeDebugDumpElement_t
        {
        public:
            std::int32_t m_nEntityIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_modelName; // 0x_            
            // m_poseParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_poseParams;
            char m_poseParams[0x_]; // 0x_            
            // m_decodeOps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_decodeOps;
            char m_decodeOps[0x_]; // 0x_            
            // m_internalOps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_internalOps;
            char m_internalOps[0x_]; // 0x_            
            // m_decodedAnims has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_decodedAnims;
            char m_decodedAnims[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t, m_nEntityIndex) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t, m_modelName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t, m_poseParams) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t, m_decodeOps) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t, m_internalOps) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t, m_decodedAnims) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t) == 0x_);
    };
};
