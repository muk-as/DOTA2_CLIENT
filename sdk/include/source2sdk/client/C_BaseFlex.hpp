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
        // Size: 0xb98
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
            uint8_t _pad0998[0x10]; // 0x998
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0x9a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0x9c0            
            uint8_t _pad09cc[0x84]; // 0x9cc
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0xa50            
            uint8_t _pad0a51[0x5f]; // 0xa51
            std::int32_t m_nLastFlexUpdateFrameCount; // 0xab0            
            Vector m_CachedViewTarget; // 0xab4            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0xac0            
            std::int32_t m_iBlink; // 0xac4            
            float m_blinktime; // 0xac8            
            bool m_prevblinktoggle; // 0xacc            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0xacd            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xace            
            bool m_bResetFlexWeightsOnModelChange; // 0xacf            
            uint8_t _pad0ad0[0x18]; // 0xad0
            std::int32_t m_nEyeOcclusionRendererBone; // 0xae8            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xaec            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0xb1c            
            uint8_t _pad0b28[0x10]; // 0xb28
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0xb38            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0xb98);
    };
};
