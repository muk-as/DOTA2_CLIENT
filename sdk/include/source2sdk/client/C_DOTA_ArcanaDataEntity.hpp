#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CDOTA_ArcanaDataEntity_DrowRanger;
};

namespace source2sdk::client
{
    class CDOTA_ArcanaDataEntity_FacelessVoid;
};

namespace source2sdk::client
{
    class CDOTA_ArcanaDataEntity_Razor;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x578
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_DrowRanger * m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger"
    // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_FacelessVoid * m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid"
    // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_Razor * m_pArcanaData_CDOTA_ArcanaDataEntity_Razor"
    #pragma pack(push, 1)
    class C_DOTA_ArcanaDataEntity : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        client::CDOTA_ArcanaDataEntity_DrowRanger* m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger; // 0x560        
        // metadata: MNetworkEnable
        client::CDOTA_ArcanaDataEntity_FacelessVoid* m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid; // 0x568        
        // metadata: MNetworkEnable
        client::CDOTA_ArcanaDataEntity_Razor* m_pArcanaData_CDOTA_ArcanaDataEntity_Razor; // 0x570        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_ArcanaDataEntity because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_ArcanaDataEntity) == 0x578);
};
