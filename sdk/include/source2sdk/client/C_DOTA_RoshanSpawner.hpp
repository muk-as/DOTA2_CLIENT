#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
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
    // Size: 0x550
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iLastKillerTeam"
    // static metadata: MNetworkVarNames "int m_iKillCount"
    // static metadata: MNetworkVarNames "Vector m_vRoshanAltLocation"
    #pragma pack(push, 1)
    class C_DOTA_RoshanSpawner : public client::C_PointEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iLastKillerTeam; // 0x538        
        // metadata: MNetworkEnable
        int32_t m_iKillCount; // 0x53c        
        // metadata: MNetworkEnable
        Vector m_vRoshanAltLocation; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x54c[0x4];
        
        // Static fields:
        static client::C_DOTA_RoshanSpawner* &Get_s_pRoshanSpawner() {return *reinterpret_cast<client::C_DOTA_RoshanSpawner**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_DOTA_RoshanSpawner")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_RoshanSpawner because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_RoshanSpawner) == 0x550);
};
