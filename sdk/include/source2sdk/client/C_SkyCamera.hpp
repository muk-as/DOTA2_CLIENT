#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"

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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
        // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
        #pragma pack(push, 1)
        class C_SkyCamera : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::sky3dparams_t m_skyboxData; // 0x510            
            // metadata: MNetworkEnable
            CUtlStringToken m_skyboxSlotToken; // 0x5a0            
            bool m_bUseAngles; // 0x5a4            
            uint8_t _pad05a5[0x3]; // 0x5a5
            source2sdk::client::C_SkyCamera* m_pNext; // 0x5a8            
            
            // Datamap fields:
            // int16_t m_skyboxData.scale; // 0x518
            // Vector m_skyboxData.origin; // 0x51c
            // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x528
            // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x52c
            // bool m_skyboxData.fog.enable; // 0x594
            // bool m_skyboxData.fog.blend; // 0x595
            // Vector m_skyboxData.fog.dirPrimary; // 0x538
            // Color m_skyboxData.fog.colorPrimary; // 0x544
            // Color m_skyboxData.fog.colorSecondary; // 0x548
            // float m_skyboxData.fog.start; // 0x554
            // float m_skyboxData.fog.end; // 0x558
            // float m_skyboxData.fog.maxdensity; // 0x560
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SkyCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SkyCamera) == 0x5b0);
    };
};
