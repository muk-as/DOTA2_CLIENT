#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"

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
        // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
        // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
        #pragma pack(push, 1)
        class CSkyCamera : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::sky3dparams_t m_skyboxData; // 0x_            
            // metadata: MNetworkEnable
            CUtlStringToken m_skyboxSlotToken; // 0x_            
            bool m_bUseAngles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CSkyCamera* m_pNext; // 0x_            
            
            // Datamap fields:
            // int16_t m_skyboxData.scale; // 0x_
            // Vector m_skyboxData.origin; // 0x_
            // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x_
            // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x_
            // bool m_skyboxData.fog.enable; // 0x_
            // bool m_skyboxData.fog.blend; // 0x_
            // Vector m_skyboxData.fog.dirPrimary; // 0x_
            // Color m_skyboxData.fog.colorPrimary; // 0x_
            // Color m_skyboxData.fog.colorSecondary; // 0x_
            // float m_skyboxData.fog.start; // 0x_
            // float m_skyboxData.fog.end; // 0x_
            // float m_skyboxData.fog.maxdensity; // 0x_
            // void InputActivateSkybox; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkyCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSkyCamera) == 0x_);
    };
};
