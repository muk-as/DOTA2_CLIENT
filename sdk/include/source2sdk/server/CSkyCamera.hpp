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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x578
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
            source2sdk::server::sky3dparams_t m_skyboxData; // 0x4d8            
            // metadata: MNetworkEnable
            CUtlStringToken m_skyboxSlotToken; // 0x568            
            bool m_bUseAngles; // 0x56c            
            uint8_t _pad056d[0x3]; // 0x56d
            source2sdk::server::CSkyCamera* m_pNext; // 0x570            
            
            // Datamap fields:
            // int16_t m_skyboxData.scale; // 0x4e0
            // Vector m_skyboxData.origin; // 0x4e4
            // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4f0
            // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4f4
            // bool m_skyboxData.fog.enable; // 0x55c
            // bool m_skyboxData.fog.blend; // 0x55d
            // Vector m_skyboxData.fog.dirPrimary; // 0x500
            // Color m_skyboxData.fog.colorPrimary; // 0x50c
            // Color m_skyboxData.fog.colorSecondary; // 0x510
            // float m_skyboxData.fog.start; // 0x51c
            // float m_skyboxData.fog.end; // 0x520
            // float m_skyboxData.fog.maxdensity; // 0x528
            // void InputActivateSkybox; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkyCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSkyCamera) == 0x578);
    };
};
