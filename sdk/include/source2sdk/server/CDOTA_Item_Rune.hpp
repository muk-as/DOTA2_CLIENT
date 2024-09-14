#pragma once
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_flSimulationTime"
    // static metadata: MNetworkVarNames "int m_iRuneType"
    // static metadata: MNetworkVarNames "float m_flRuneTime"
    // static metadata: MNetworkVarNames "int m_nMapLocationTeam"
    // static metadata: MNetworkVarNames "char m_szLocation"
    #pragma pack(push, 1)
    class CDOTA_Item_Rune : public server::CBaseAnimatingActivity
    {
    public:
        // m_hRuneSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRuneSpawner;
        char m_hRuneSpawner[0x4]; // 0x798        
        // metadata: MNetworkEnable
        int32_t m_iRuneType; // 0x79c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "4"
        float m_flRuneTime; // 0x7a0        
        // metadata: MNetworkEnable
        int32_t m_nMapLocationTeam; // 0x7a4        
        // metadata: MNetworkEnable
        char m_szLocation[512]; // 0x7a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Rune because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Rune) == 0x9a8);
};
