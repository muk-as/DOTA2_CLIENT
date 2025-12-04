#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingOverlay.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        // static metadata: MNetworkVarNames "VectorWS m_vLookTargetPosition"
        // static metadata: MNetworkVarNames "bool m_blinktoggle"
        #pragma pack(push, 1)
        class CBaseFlex : public source2sdk::server::CBaseAnimatingOverlay
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vLookTargetPosition; // 0x_            
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flAllowResponsesEndTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastFlexAnimationTime; // 0x_            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x_            
            bool m_bUpdateLayerPriorities; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CBaseFlexProcessSceneEventsThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseFlex) == 0x_);
    };
};
