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
    // Size: 0x580
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
    // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
    #pragma pack(push, 1)
    class CSkyCamera : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        server::sky3dparams_t m_skyboxData; // 0x4e0        
        // metadata: MNetworkEnable
        CUtlStringToken m_skyboxSlotToken; // 0x570        
        bool m_bUseAngles; // 0x574        
        [[maybe_unused]] std::uint8_t pad_0x575[0x3]; // 0x575
        server::CSkyCamera* m_pNext; // 0x578        
        
        // Datamap fields:
        // int16_t m_skyboxData.scale; // 0x4e8
        // Vector m_skyboxData.origin; // 0x4ec
        // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4f8
        // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4fc
        // bool m_skyboxData.fog.enable; // 0x564
        // bool m_skyboxData.fog.blend; // 0x565
        // Vector m_skyboxData.fog.dirPrimary; // 0x508
        // Color m_skyboxData.fog.colorPrimary; // 0x514
        // Color m_skyboxData.fog.colorSecondary; // 0x518
        // float m_skyboxData.fog.start; // 0x524
        // float m_skyboxData.fog.end; // 0x528
        // float m_skyboxData.fog.maxdensity; // 0x530
        // void InputActivateSkybox; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSkyCamera because it is not a standard-layout class
    static_assert(sizeof(CSkyCamera) == 0x580);
};
