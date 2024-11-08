#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
    // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
    #pragma pack(push, 1)
    class C_SkyCamera : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        client::sky3dparams_t m_skyboxData; // 0x560        
        // metadata: MNetworkEnable
        CUtlStringToken m_skyboxSlotToken; // 0x5f0        
        bool m_bUseAngles; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3]; // 0x5f5
        client::C_SkyCamera* m_pNext; // 0x5f8        
        
        // Datamap fields:
        // int16_t m_skyboxData.scale; // 0x568
        // Vector m_skyboxData.origin; // 0x56c
        // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x578
        // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x57c
        // bool m_skyboxData.fog.enable; // 0x5e4
        // bool m_skyboxData.fog.blend; // 0x5e5
        // Vector m_skyboxData.fog.dirPrimary; // 0x588
        // Color m_skyboxData.fog.colorPrimary; // 0x594
        // Color m_skyboxData.fog.colorSecondary; // 0x598
        // float m_skyboxData.fog.start; // 0x5a4
        // float m_skyboxData.fog.end; // 0x5a8
        // float m_skyboxData.fog.maxdensity; // 0x5b0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SkyCamera because it is not a standard-layout class
    static_assert(sizeof(C_SkyCamera) == 0x600);
};
