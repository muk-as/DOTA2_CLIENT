#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x558
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
    // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
    #pragma pack(push, 1)
    class CSkyCamera : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        server::sky3dparams_t m_skyboxData; // 0x4b8        
        // metadata: MNetworkEnable
        CUtlStringToken m_skyboxSlotToken; // 0x548        
        bool m_bUseAngles; // 0x54c        
        [[maybe_unused]] std::uint8_t pad_0x54d[0x3]; // 0x54d
        server::CSkyCamera* m_pNext; // 0x550        
        
        // Datamap fields:
        // int16_t m_skyboxData.scale; // 0x4c0
        // Vector m_skyboxData.origin; // 0x4c4
        // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4d0
        // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4d4
        // bool m_skyboxData.fog.enable; // 0x53c
        // bool m_skyboxData.fog.blend; // 0x53d
        // Vector m_skyboxData.fog.dirPrimary; // 0x4e0
        // Color m_skyboxData.fog.colorPrimary; // 0x4ec
        // Color m_skyboxData.fog.colorSecondary; // 0x4f0
        // float m_skyboxData.fog.start; // 0x4fc
        // float m_skyboxData.fog.end; // 0x500
        // float m_skyboxData.fog.maxdensity; // 0x508
        // void InputActivateSkybox; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSkyCamera because it is not a standard-layout class
    static_assert(sizeof(CSkyCamera) == 0x558);
};
