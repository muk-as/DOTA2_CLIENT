#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseAnimatingOverlay.hpp"
#include "source2sdk/client/C_BaseFlex_Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xbc0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        // static metadata: MNetworkVarNames "bool m_blinktoggle"
        #pragma pack(push, 1)
        class C_BaseFlex : public source2sdk::client::C_BaseAnimatingOverlay
        {
        public:
            uint8_t _pad09c0[0x10]; // 0x9c0
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0x9d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0x9e8            
            uint8_t _pad09f4[0x84]; // 0x9f4
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0xa78            
            uint8_t _pad0a79[0x5f]; // 0xa79
            std::int32_t m_nLastFlexUpdateFrameCount; // 0xad8            
            Vector m_CachedViewTarget; // 0xadc            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0xae8            
            std::int32_t m_iBlink; // 0xaec            
            float m_blinktime; // 0xaf0            
            bool m_prevblinktoggle; // 0xaf4            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0xaf5            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xaf6            
            bool m_bResetFlexWeightsOnModelChange; // 0xaf7            
            uint8_t _pad0af8[0x18]; // 0xaf8
            std::int32_t m_nEyeOcclusionRendererBone; // 0xb10            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xb14            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0xb44            
            uint8_t _pad0b50[0x10]; // 0xb50
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0xb60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0xbc0);
    };
};
