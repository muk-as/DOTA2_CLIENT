#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_ArcanaDataEntity_DrowRanger;
};

namespace source2sdk::server
{
    class CDOTA_ArcanaDataEntity_FacelessVoid;
};

namespace source2sdk::server
{
    class CDOTA_ArcanaDataEntity_Razor;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_DrowRanger * m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger"
    // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_FacelessVoid * m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid"
    // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_Razor * m_pArcanaData_CDOTA_ArcanaDataEntity_Razor"
    #pragma pack(push, 1)
    class CDOTA_ArcanaDataEntity : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        server::CDOTA_ArcanaDataEntity_DrowRanger* m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger; // 0x4b8        
        // metadata: MNetworkEnable
        server::CDOTA_ArcanaDataEntity_FacelessVoid* m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid; // 0x4c0        
        // metadata: MNetworkEnable
        server::CDOTA_ArcanaDataEntity_Razor* m_pArcanaData_CDOTA_ArcanaDataEntity_Razor; // 0x4c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity because it is not a standard-layout class
    static_assert(sizeof(CDOTA_ArcanaDataEntity) == 0x4d0);
};
