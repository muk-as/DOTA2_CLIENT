#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_ArcanaDataEntity_DrowRanger;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_ArcanaDataEntity_FacelessVoid;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_ArcanaDataEntity_Razor;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_DrowRanger * m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger"
        // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_FacelessVoid * m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid"
        // static metadata: MNetworkVarNames "CDOTA_ArcanaDataEntity_Razor * m_pArcanaData_CDOTA_ArcanaDataEntity_Razor"
        #pragma pack(push, 1)
        class C_DOTA_ArcanaDataEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::CDOTA_ArcanaDataEntity_DrowRanger* m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::CDOTA_ArcanaDataEntity_FacelessVoid* m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::CDOTA_ArcanaDataEntity_Razor* m_pArcanaData_CDOTA_ArcanaDataEntity_Razor; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_ArcanaDataEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_ArcanaDataEntity) == 0x_);
    };
};
